#include <stdio.h>
#include <vector>
using namespace std;
int check[8][8], count=0;
vector<vector<int>> map(8, vector<int>(8));
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1}; // 12, 3, 6, 9 πÊ«‚ 

void DFS(int x, int y){
	int i, xx, yy;
	if(x==7 && y==7){
		count++;
	} else {
		for(i=0; i<4; i++){
			xx = x+dx[i];
			yy = y+dy[i];
			if(xx<1 || xx>7 || yy<1 || yy>7){
				continue;
			}
			if(map[xx][yy]==0 && check[xx][yy]==0){
				check[xx][yy] = 1;
				DFS(xx, yy);
				check[xx][yy] = 0;
			}
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, j;
	
	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			scanf("%d", &map[i][j]);
		}
	}
	check[1][1] = 1;
	DFS(1, 1);
	printf("%d", count);
	
	return 0;
}
