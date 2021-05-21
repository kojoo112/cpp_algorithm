#include <stdio.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	char str[51];
	int i, number=0, divisor_count=0;
	scanf("%s", &str);
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i] >=48 && str[i] <= 57){
			number = number * 10 + str[i] - 48;
		}
	}
	printf("%d\n", number);
	
	for(i=1; i<=number; i++){
		if(number%i == 0){
			divisor_count++;
		}
	}
	printf("%d", divisor_count);
	
	return 0;
}
