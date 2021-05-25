#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, m, i, a_index=0, b_index=0, c_index=0;
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	scanf("%d", &m);
	vector<int> b(m), c(n+m);
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
	// ½ºÄµ
	
	while(a_index<n && b_index<m){
		if(a[a_index] < b[b_index]){
			a_index++;
		} else if(a[a_index] > b[b_index]){
			b_index++;
		} else {
			c[c_index++] = a[a_index++];
			b_index++;
		}
	}
	
	for(i=0; i<c_index; i++){
		printf("%d ", c[i]);
	}
	
	return 0;
}
