#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int unf[10001];

struct Edge{
	int v1;
	int v2;
	int value;
	Edge(int a, int b, int c){
		v1 = a;
		v2 = b;
		value = c;
	}
	bool operator<(Edge &b){
		return value<b.value;
	}
};

int Find(int v){
	if(v == unf[v]){
		return v;
	} else {
		return unf[v] = Find(unf[v]);
	}
}

void Union(int a, int b){
	a = Find(a);
	b = Find(b);
	if(a!=b) {
		unf[a] = b;
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	vector<Edge> Ed;
	int i, n, m, a, b, c, count=0, result=0;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		unf[i] = i;
	}
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	sort(Ed.begin(), Ed.end());
	for(i=0; i<m; i++){
		int find_a = Find(Ed[i].v1);
		int find_b = Find(Ed[i].v2);
		if(find_a != find_b){
			result += Ed[i].value;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}
	printf("%d", result);
	return 0;
}
