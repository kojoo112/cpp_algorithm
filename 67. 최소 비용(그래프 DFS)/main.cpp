#include <stdio.h>
#include <vector>
using namespace std;
int map[30][30], n, check[30], cost=2147000000;

void DFS(int v, int sum){
	if(v == n){
		if(cost > sum){
			cost = sum;
		}
	} else {
		for(int i=1; i<=n; i++){
			if(map[v][i]>0 && check[i]==0){
				check[i] = 1;
				DFS(i, sum+map[v][i]);
				check[i] = 0;
			}
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, a, b, c;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}
	check[1] = 1;
	DFS(1, 0);
	printf("%d", cost);
	
	return 0;
}
