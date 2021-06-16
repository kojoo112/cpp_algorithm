#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int n, r, input[20], result[20], check[20], count=0;

int DFS(int L){
	if(L==r){
		for(int j=0; j<L; j++){
			printf("%d ", result[j]);
		}
		count++;
		puts("");
	} else {
		for(int i=1; i<=n; i++){
			if(check[i]==0){
				result[L] = input[i];
				check[i] = 1;
				DFS(L+1);
				check[i] = 0;
			}
		}
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &r);
	for(int i=1; i<=n; i++){
		scanf("%d", &input[i]);
	}
	DFS(0);
	printf("%d", count);
	
	return 0;
}
