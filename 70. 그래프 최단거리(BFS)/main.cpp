#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int check[30], distances[30]; 

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, a, b, x;
	vector<int> map[30];
	queue<int> Q;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	Q.push(1);
	check[1] = 1;
	while(!Q.empty()){
		x = Q.front();
		Q.pop();
		for(i=0; i<map[x].size(); i++){
			if(check[map[x][i]] == 0){
				check[map[x][i]] = 1;
				Q.push(map[x][i]);
				distances[map[x][i]] = distances[x]+1;
			}
		}
	}
	
	for(i=2; i<=n; i++){
		printf("%d : %d\n", i, distances[i]);
	}
	
	return 0;
}
