#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int distances[101];
struct Edge{
	int s;
	int e;
	int value;
	Edge(int a, int b, int c){
		s = a;
		e = b;
		value = c;
	}
};

int main(){
	freopen("input.txt", "rt", stdin);
	vector<Edge> Ed;
	int i, n, m, a, b, c, j, s, e;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	for(i=1; i<=n; i++){
		distances[i] = 2147000000;
	}
	scanf("%d %d", &s, &e);
	distances[s] = 0;
	for(i=1; i<n; i++){
		for(j=0; j<Ed.size(); j++){
			int u = Ed[j].s;
			int v = Ed[j].e;
			int w = Ed[j].value;
			if(distances[u]!=2147000000 && distances[u]+w<distances[v]){
				distances[v] = distances[u] + w;
			}
		}
	}
	for(j=0; j<Ed.size(); j++){
		int u = Ed[j].s;
		int v = Ed[j].e;
		int w = Ed[j].value;
		if(distances[u]!=2147000000 && distances[u]+w<distances[v]){
			printf("-1");
			exit(0);
		}
	}
	printf("%d\n", distances[e]);
	
	return 0;
}
