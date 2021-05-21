#include<stdio.h>
using namespace std;

int digit_sum(int x){
	int sum=0, temp;
		
	while(x > 0){
		temp = x % 10;
		sum += temp;
		x = x / 10;
	}   
	return sum;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, number, i, sum, max=-2147000000, result;
	scanf("%d", &n);
    
	for(i=0; i<n; i++){
		scanf("%d", &number);
		sum = digit_sum(number);
		if(sum > max){
			max = sum;
			result = number;
		} else if(sum == max){
			if(number > result){
				result = number;	
			}
		}
	}
	printf("%d\n", result);
    
	return 0;
}
