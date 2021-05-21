#include <stdio.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, temp, max=-2147000000, min=2147000000;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &temp);
		if(temp > max){
			max = temp;
		}
		if(temp < min){
			min = temp;
		}
	}
	printf("%d", max-min);
	
	return 0;
}
