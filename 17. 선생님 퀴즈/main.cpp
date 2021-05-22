#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, number, answer, i, j, sum;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d %d", &number, &answer);
		sum=0;
		for(j=1; j<=number; j++){
			sum += j;
		}
		if(answer == sum){
			printf("YES\n");
		} else printf("NO\n");
	}
	
	return 0;
}
