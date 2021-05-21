#include<stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, digit=1, count=9, sum=0, result=0;
	scanf("%d", &n);
	
	while(n > sum + count){
		result = result + (digit * count);
		sum = sum + count;
		count = count * 10;
		digit++;
	}
	result = result + ((n - sum) * digit);
	
	printf("%d", result);
    
	return 0;
}
