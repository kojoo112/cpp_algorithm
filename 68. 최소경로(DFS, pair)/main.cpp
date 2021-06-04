#include <stdio.h>
#include <vector>
using namespace std;
int check[30], n, cost=2147000000;
vector<pair<int, int> > map[30];

void DFS(int v, int sum){
	if(v == n){
		if(sum < cost){
			cost = sum;
		} 
	} else {
		for(int i=0; i<map[v].size(); i++){
			if(check[map[v][i].first]==0){
				check[map[v][i].first] = 1;
				DFS(map[v][i].first, sum+map[v][i].second);
				check[map[v][i].first] = 0;
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
		map[a].push_back(make_pair(b, c));
	}
	check[1] = 1;
	DFS(1, 0);
	printf("%d", cost);
	
	return 0;
}
