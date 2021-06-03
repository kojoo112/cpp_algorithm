#include <stdio.h>
#include <vector>
using namespace std;
int n, check[30], count=0;
vector<int> map[30];

void DFS(int v){
	if(v == n){
		count++;
	} else {
		for(int i=0; i<map[v].size(); i++){
			if(check[map[v][i]] == 0){
				check[map[v][i]] = 1;
				DFS(map[v][i]);
				check[map[v][i]] = 0;
			}
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, a, b;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	check[1] = 1;
	DFS(1);
	printf("%d", count);
	
	return 0;
}
