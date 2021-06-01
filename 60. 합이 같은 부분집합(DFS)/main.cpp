#include <stdio.h>
using namespace std;
int n, i, arr[11], total=0;
bool flag = false;

void DFS(int level, int sum){
	if(sum > total/2){
		return;
	}
	if(level == n+1){
		if(sum == (total-sum)){
			flag = true;
			return;
		}
	} else {
		DFS(level+1, sum+arr[level]);
		DFS(level+1, sum);
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	DFS(1, 0);
	if(flag){
		printf("YES");
	} else {
		printf("NO");	
	}
	
	return 0;
}
