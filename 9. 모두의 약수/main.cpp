#include <stdio.h>
using namespace std;
int count[50001];

int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=i; j<=n; j=j+i){
			count[j]++;
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d ", count[i]);
	}
	
	return 0;
}
