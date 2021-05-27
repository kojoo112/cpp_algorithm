#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, sum=0;
	scanf("%d", &n);
	vector< vector<int>> a(n+1, vector<int>(n+1));
	vector<int> b(n+1);
	
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			a[j][i] = b[i];
		}
	}
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(a[i][j] > b[i]){
				a[i][j] = b[i];
			}
			sum+= a[i][j];
		}
	}
	printf("%d", sum);
	
	return 0;
}
