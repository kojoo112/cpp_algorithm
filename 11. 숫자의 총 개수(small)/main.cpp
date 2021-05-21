#include<stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, temp, count=0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		temp = i;
		while(temp > 0){
			count++;
			temp /= 10;
		}
	}
	printf("%d", count);
    
	return 0;
}
