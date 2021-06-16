#include <stdio.h>
#include <vector>
using namespace std;
int a[20], operators[5], n, maximum=-2147000000, minimum=2147000000;

void DFS(int L, int result){
	if(L==n){
		if(result>maximum){
			maximum = result;
		}
		if(result<minimum){
			minimum = result;
		}
	} else {
		if(operators[0]>0){
			operators[0]--;
			DFS(L+1, result+a[L]);
			operators[0]++;
		}
		if(operators[1]>0){
			operators[1]--;
			DFS(L+1, result-a[L]);
			operators[1]++;
		}
		if(operators[2]>0){
			operators[2]--;
			DFS(L+1, result*a[L]);
			operators[2]++;
		}
		if(operators[3]>0){
			operators[3]--;
			DFS(L+1, result/a[L]);
			operators[3]++;
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<4; i++){
		scanf("%d", &operators[i]);
	}
	DFS(1, a[0]);
	printf("%d\n%d\n", maximum, minimum);
	
	return 0;
}
