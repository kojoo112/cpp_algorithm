#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, index, temp;
	int number[101];
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &number[i]);
	}
	
	for(i=0; i<n-1; i++){
		index = i;
		for(j=i+1; j<n; j++){
			if(number[j] < number[index]){
				index = j;
			}
			temp = number[i];
			number[i] = number[index];
			number[index] = temp;
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ", number[i]);
	}
	
	return 0;
}
