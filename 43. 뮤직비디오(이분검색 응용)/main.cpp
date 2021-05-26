#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[1001], n;

int Count(int size){
	int i, sum=0, count=1;
	for(i=1; i<=n; i++){
		if(sum+a[i]>size){
			count++;
			sum = a[i];
		} else {
			sum = sum + a[i];
		}
	}
	return count;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, left=1, right=0, mid, result, max=-2147000000;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		right += a[i];
		if(max < a[i]){
			max = a[i];
		}
	}
	
	while(left <= right){
		mid = (left+right)/2;
		if(max <= mid && Count(mid) <= m){
			result = mid;
			right = mid -1;
		} else {
			left = mid + 1;
		}
	}
	printf("%d", result);

	return 0;
}
