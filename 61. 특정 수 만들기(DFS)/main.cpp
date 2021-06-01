#include <stdio.h>
using namespace std;
int n, m, i, arr[11];
int count=0;

void DFS(int level, int sum){
	if(level == n+1){
		if(sum == m){
			count++;
		}
	} else {
		DFS(level+1, sum+arr[level]);
		DFS(level+1, sum);
		DFS(level+1, sum-arr[level]);
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	DFS(1, 0);
	
	if(count == 0){
		printf("-1");
	} else{
		printf("%d", count);
	}
	
	return 0;
}
