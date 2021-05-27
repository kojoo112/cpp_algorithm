#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int height, width, i, j, n, m, temp, max=-2147000000;
	scanf("%d %d", &height, &width);
	vector< vector<int>> territory(height+1, vector<int>(width+1));
	vector< vector<int>> dy(height+1, vector<int>(width+1));
	
	for(i=1; i<=height; i++){
		for(j=1; j<=width; j++){
			scanf("%d", &territory[i][j]);
			dy[i][j] = dy[i-1][j] + dy[i][j-1] - dy[i-1][j-1] + territory[i][j];
		}
	}
	scanf("%d %d", &n, &m);
	
	for(i=n; i<=height; i++){
		for(j=m; j<=width; j++){
			temp = dy[i][j] - dy[i-n][j] - dy[i][j-m] + dy[i-n][j-m];
			if(temp > max){
				max = temp;
			}
		}
	}
	printf("%d", max);
	
	return 0;
}
