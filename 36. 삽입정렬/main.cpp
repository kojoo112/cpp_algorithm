#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, temp, number[101];
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &number[i]);
	}
	
	for(i=1; i<n; i++){
		temp = number[i];
		for(j=i-1; j>=0; j--){
			if(number[j] > temp){
				number[j+1] = number[j];
			} else{
				break;
			}
		}
		number[j+1] = temp;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", number[i]);
	}
	
	return 0;
}
