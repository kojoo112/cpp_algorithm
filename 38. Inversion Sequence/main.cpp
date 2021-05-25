#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, position;
	scanf("%d", &n);
	vector<int> is(n+1), os(n+1);
	// is = inversion_sequence, os = origianl_sequence
	
	for(i=1; i<=n; i++){
		scanf("%d", &is[i]);
	}
	
	for(i=n; i>=1; i--){
		position = i;
		for(j=1; j<=is[i]; j++){
			os[position] = os[position+1];
			position++;
		}
		os[position] = i;
	}
	
	for(i=1; i<=n; i++){
		printf("%d ", os[i]);
	}
	
	return 0;
}
