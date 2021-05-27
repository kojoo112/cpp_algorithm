#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, k, flag=0, count=0;
	scanf("%d", &n);
	vector<vector <int>> mountain (n+2, vector<int>(n+2));
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &mountain[i][j]);
		}
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			flag = 0;
			for(k=0; k<4; k++){
				if(mountain[i][j] <= mountain[i+dx[k]][j+dy[k]]){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				count++;
			}
		}
	}
	printf("%d", count);
	
	
	return 0;
}
