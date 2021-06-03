#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	a.push_back(6);
	a.push_back(8);
	a.push_back(11);
	printf("%d\n", a.size());	// size : 3
	printf("%d\n", a[1]);		// a[1] : 8
	
	vector<int> c[3];
	c[0].push_back(1);
	c[0].push_back(3);
	c[0].push_back(5);
	c[1].push_back(2);
	c[1].push_back(4);
	c[1].push_back(6);
	printf("%d\n", c[0][1]);	// 3 
	printf("%d\n", c[1][2]);	// 6
	
	vector<pair<int, int>> graph[3];
	graph[0].push_back({1, 1});
	graph[0].push_back({1, 2});
	graph[0].push_back({1, 3});
	graph[1].push_back({2, 1});
	graph[1].push_back({2, 2});
	printf("%d %d\n", graph[0][1].first, graph[0][1].second);	// 1 2
	printf("%d %d\n", graph[1][1].first, graph[1][1].second);	// 2 2
	
	return 0;
}
