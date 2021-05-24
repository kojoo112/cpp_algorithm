#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, score[101], rank[101];
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &score[i]);
		rank[i] = 1;
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(score[i] < score[j]){
				rank[i]++;
			}
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d ", rank[i]);
	}
		
	return 0;
}
