#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int check[30];
struct Edge{
	int e;
	int value;
	Edge(int a, int b){
		e = a;
		value = b;
	}
	bool operator<(const Edge &b)const{
	return value>b.value;
	}
};
int main(){
	//freopen("input.txt", "rt", stdin);
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	int i, n, m, a, b, c, result=0;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}
	Q.push(Edge(1, 0));
	while(!Q.empty()){
		Edge temp = Q.top();
		Q.pop();
		int v = temp.e;
		int cost = temp.value;
		if(check[v]==0){
			result += cost;
			check[v] = 1;
			for(i=0; i<map[v].size(); i++){
				Q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}
	printf("%d", result);
	return 0;
}
