#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n;

int Count(int length, vector<int> vInt){
	int i, position=vInt[1], count=1;
	
	for(i=2; i<=n; i++){
		if(vInt[i]-position >= length){
			count++;
			position = vInt[i];
		}
	}
	return count;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, left=1, right=0, mid, result;
	scanf("%d %d", &n, &m);
	
	vector<int> vInt(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &vInt[i]);
	}
	sort(vInt.begin(), vInt.end());
	right = vInt[n];
	
	while(left <= right){
		mid = (left+right)/2;
		if(Count(mid, vInt) >= m){
			result = mid;
			left = mid + 1;
		} else {
			right = mid -1;
		}
	}
	printf("%d", result);

	return 0;
}
