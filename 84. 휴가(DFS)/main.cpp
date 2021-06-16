#include <stdio.h>
#include <vector>
using namespace std;
int n, result=-2147000000;
vector<int> day, pay;

void DFS(int L, int sum){
	if(L==n+1){
		if(sum>result){
			result = sum;
		}
	} else {
		if(L+day[L]<=n+1){
			DFS(L+day[L], sum+pay[L]);
		}
		DFS(L+1, sum);
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	int a, b;
	scanf("%d", &n);
	day.push_back(0);
	pay.push_back(0);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		day.push_back(a);
		pay.push_back(b);
	}
	DFS(1,0);
	printf("%d", result);
	
	return 0;
}
