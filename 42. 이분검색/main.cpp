#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, key, left=0, right, i, mid, result;
	scanf("%d %d", &n, &key);
	vector<int> check(n);
		
	for(i=0; i<n; i++){
		scanf("%d", &check[i]);
	}
	sort(check.begin(), check.end());
	
	right = n-1;
	
	while(left <= right){
		mid = (left+right)/2;
		if(key == check[mid]){
			printf("%d", mid+1);
			return 0;
		} else if(key < check[mid]){
			right = mid-1;
		} else {
			left = mid+1;
		}
	}
	
	return 0;
}
