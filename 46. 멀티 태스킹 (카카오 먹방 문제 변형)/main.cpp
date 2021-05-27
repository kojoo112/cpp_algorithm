#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, index=0, black_out, count=0, total=0;
	scanf("%d", &n);
	vector<int> work(n+1);
	
	for(i=1; i<=n; i++){
		scanf("%d", &work[i]);
		total += work[i];
	}
	scanf("%d", &black_out);
	if(total <= black_out){
		printf("-1");
		return 0;
	}
	
	while(1){
		index++;
		if(index > n){
			index = 1;
		}
		if(work[index] == 0){
			continue;
		}
		if(work[index] != 0){
			work[index]--;
			count++;
		}
		if(count == black_out){
			break;
		}
	}
	
	while(1){
		index++;
		if(index > n){
			index = 1;
		}
		if(work[index] != 0){
			break;
		}
	}
	printf("%d", index);
	
	return 0;
}
