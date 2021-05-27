#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int height, width, n, m, i, j, k, s, sum=0, max=-2147000000;
	scanf("%d %d", &height, &width);
	vector< vector<int>> territory(height+1, vector<int>(width+1));
	for(i=1; i<=height; i++){
		for(j=1; j<=width; j++){
			scanf("%d", &territory[i][j]);
		}
	}
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=height-n+1; i++){
		for(j=1; j<=width-m+1; j++){
			sum=0;
			for(k=i; k<i+n; k++){
				for(s=j; s<j+m; s++){
					sum += territory[k][s];
				}
			}
			if(sum > max){
				max = sum;
			}
		}
	}
	printf("%d", max);
	
	return 0;
}
