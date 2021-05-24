#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int i, j, n, count=0;
	scanf("%d", &n);
	vector<int> rank(n+1);
	
	for(i=1; i<=n; i++){
		scanf("%d", &rank[i]);
	}
	printf("1 ");
	
	for(i=2; i<=n; i++){
		count = 0;
		for(j=i-1; j>=1; j--){
			if(rank[j] >= rank[i]){
				count++;
			}
		}
		printf("%d ", count+1);
	}
	
	return 0;
}
