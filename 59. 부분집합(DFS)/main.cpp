#include <stdio.h>
using namespace std;
int n, i, check[11];

void DFS(int level){
	if(level == n+1){
		for(i=1; i<=n; i++){
			if(check[i] == 1){
				printf("%d ", i);
			}
		}
		puts("");
	} else {
		check[level] = 1;
		DFS(level+1);
		check[level] = 0;
		DFS(level+1);
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	DFS(1);
	
	return 0;
}
