#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[101], b[101], c[201];
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, m, i, a_index=1, b_index=1, c_index=1;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(i=1; i<=m; i++){
		scanf("%d", &b[i]);
	}
	// ½º Äµ
	
	while(a_index<=n && b_index<=m){
		if(a[a_index] < b[b_index]){
			c[c_index++] = a[a_index++];
		} else if(a[a_index] > b[b_index]){
			c[c_index++] = b[b_index++];
		} else{
			c[c_index++] = b[b_index++];
		}
	}
	while(a_index<=n) c[c_index++] = a[a_index++];
	while(b_index<=m) c[c_index++] = b[b_index++];
	
	for(i=1; i<c_index; i++){
		printf("%d ", c[i]);
	}
	
	return 0;
}
