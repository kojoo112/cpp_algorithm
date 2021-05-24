#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, left=1, right, result=0 , current, k=1;
	scanf("%d", &n);
	
	while(left != 0){
		left = n / (k * 10);
		current = (n / k) % 10;
		right = n % k;
		if(current > 3){
			result += ((left + 1) * k);
		} else if(current < 3){
			result += (left * k);
		} else{
			result += (left * k) + (right + 1);
		}
		k = k * 10;
	}
	printf("%d", result);
	
	return 0;
}
