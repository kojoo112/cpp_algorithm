#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, position, previous, now;
	scanf("%d", &n);
	vector<int> jolly_jumper(n);
	scanf("%d", &previous);
	
	for(i=1; i<n; i++){
		scanf("%d", &now);
		position = abs(previous - now);
		// abs는 절대값함수 
		if(position>0 && position<n && jolly_jumper[position]==0){
			jolly_jumper[position]++;
		} else {
			printf("NO");
			return 0;
		}
		previous = now;
	}
	
	printf("YES");
	
	return 0;
}
