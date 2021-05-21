#include <stdio.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	int a, b, i, sum=0;
	scanf("%d %d", &a, &b);
	
	for(i=a; i<b; i++){
		printf("%d + ", i);
		sum += i;
	}
	
	printf("%d = %d", i, sum+i);	
	
	return 0;
}
