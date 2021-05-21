#include<stdio.h>
using namespace std;

int check[10];
int main(){
	//freopen("input.txt", "rt", stdin);
	int i, max=-2147000000, result;
	char n[101];
	scanf("%s", &n);
	
	for(i=0; n[i]!='\0'; i++){
		check[n[i] - 48]++;
	}
	
	for(i=0; i<10; i++){
		if(check[i] >= max){
			max = check[i];
			result = i;
		}
	}
	
	printf("%d", result);
    
	return 0;
}
