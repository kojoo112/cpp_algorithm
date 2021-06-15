#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
struct Edge{
	int vertex;
	int distance;
	Edge(int a, int b){
		vertex = a;
		distance = b;
	}
	bool operator<(const Edge &b)const{
		return distance>b.distance;
	}
};

int main(){
	freopen("input.txt", "rt", stdin);
	priority_queue<Edge> Q;
	vector<pair<int, int> > graph[30];
	int i, n, m, a, b, c;
	scanf("%d %d", &n, &m);
	vector<int> distance(n+1, 2147000000);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		graph[a].push_back(make_pair(b, c));
	}
	Q.push(Edge(1, 0));
	distance[1] = 0;
	while(!Q.empty()){
		int now_vertex = Q.top().vertex;
		int now_cost = Q.top().distance;
		Q.pop();
		if(now_cost>distance[now_vertex]){
			continue;
		}
		for(i=0; i<graph[now_vertex].size(); i++){
			int next_vertex = graph[now_vertex][i].first;
			int next_cost = now_cost+graph[now_vertex][i].second;
			if(distance[next_vertex]>next_cost){
				distance[next_vertex] = next_cost;
				Q.push(Edge(next_vertex, next_cost));
			}
		}
	}
	for(i=2; i<=n; i++){
		if(distance[i]!=2147000000){
			printf("%d : %d\n", i, distance[i]);
		} else {
			printf("%d : impossible", i);
		}
	}
	
	return 0;
}
