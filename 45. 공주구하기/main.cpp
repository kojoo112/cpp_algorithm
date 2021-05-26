#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, k, i, count=0, position=0, break_point=0;
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);
	
	while(1){
		position++;
		if(position > n){
			position = 1;
		}
		if(prince[position] == 0){
			count++;
			if(count == k){
				prince[position] = 1;
				count = 0;
				break_point++;
			}
		}
		if(break_point == n-1){
			break;
		}
	}
	
	for(i=1; i<=n; i++){
		if(prince[i] == 0){
			printf("%d", i);
		}
	}

	return 0;
}
