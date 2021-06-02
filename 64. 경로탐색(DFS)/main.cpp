#include <stdio.h>
#include <vector>
using namespace std;
vector<vector<int>> map;
int check[30], count=0, n;

void DFS(int v){
	if(v == n){
		count++;
	} else {
		for(int i=1; i<=n; i++){
			if(map[v][i]==1 && check[i]==0){
				check[i] = 1;
				DFS(i);
				check[i] = 0;
			}
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, a, b;
	scanf("%d %d", &n, &m);
	map.assign(n+1, vector<int>(n+1));
	
	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
	}
	check[1]=1;
	DFS(1);
	printf("%d", count);
	return 0;
}
