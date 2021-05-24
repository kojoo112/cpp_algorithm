#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, temp, number[101];
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &number[i]);
	}
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(number[j]>0 && number[j+1]<0){
				temp = number[j];
				number[j] = number[j+1];
				number[j+1] = temp;
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ", number[i]);
	}
	
	return 0;
}
