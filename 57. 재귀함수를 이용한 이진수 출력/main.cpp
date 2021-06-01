#include <stdio.h>
using namespace std;

void recursion(int x){
	if(x == 0){
		return;
	} else {
		recursion(x/2);
		printf("%d", x%2);
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	recursion(n);
	
	return 0;
}
