#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, m, check, i, count=0, max=0;
	scanf("%d %d", &n ,&m);
	
	for(i=0; i<n; i++){
		scanf("%d", &check);
		if(m < check){
			count++;
		} else {
			count = 0;
		}
		if(count > max){
			max = count;
		}
	}
	if(max == 0){
		printf("-1");
	} else{
		printf("%d", max);
	}
	
	return 0;
}
