#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, height[101], count=0, max;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &height[i]);
	}
	
	max = height[n];
	for(i=n-1; i>0; i--){
		if(height[i] > max){
			count++;
			max = height[i];
		}
	}
	printf("%d", count);
	
	return 0;
}
