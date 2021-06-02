#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, m, i, j, a, b, c;
	scanf("%d %d", &n, &m);
	vector<vector<int>> map(n+1, vector<int>(n+1));
	
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
