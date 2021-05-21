#include<stdio.h>
using namespace std;

int reverse(int x){
	int temp, result=0;
	
	while(x > 0){
		temp = x % 10;
		result = result * 10 + temp;
		x /= 10;
	}
	return result;
}

bool isPrime(int x){
	int i;
	if(x == 1){
		return false;
	}
	
	for(i=2; i<x; i++){
		if(x%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, number, temp;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &number);
		temp = reverse(number);
		if(isPrime(temp)){
			printf("%d ", temp);
		}
	}
    
	return 0;
}
