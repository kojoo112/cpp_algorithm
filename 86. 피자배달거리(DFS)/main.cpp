#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int m, result=2147000000, distances, sum=0;
int check[20];
vector<pair<int, int>> pizza;
vector<pair<int, int>> house;

void DFS(int L, int s){
	if(L==m){
		sum=0;
		for(int i=0; i<house.size(); i++){
			int x1 = house[i].first;
			int y1 = house[i].second;
			distances = 2147000000;
			for(int j=0; j<m; j++){
				int x2 = pizza[check[j]].first;
				int y2 = pizza[check[j]].second;
				distances = min(distances, abs(x1-x2)+abs(y1-y2));
			}
			sum += distances;
		}
		if(sum<result){
			result = sum;
		}
	} else {
		for(int i=s; i<pizza.size(); i++){
			check[L] = i;
			DFS(L+1, i+1);
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, input;
	scanf("%d %d", &n, &m);
	vector<vector<int> > city(n+1, vector<int>(n+1));
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &input);
			if(input==1){
				house.push_back(make_pair(i, j));
			} else if(input==2){
				pizza.push_back(make_pair(i, j));
			}
		}
	}
	DFS(0, 0);
	printf("%d", result);
	
	return 0;
}
