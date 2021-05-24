#include <stdio.h>
using namespace std;

int cache[20];
int main(){
	//freopen("input.txt", "rt", stdin);
	int s, n, input, i, j, position;
	scanf("%d %d", &s, &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &input);
		position = -1;
		for(j=0; j<s; j++){
			if(cache[j] == input){
				position = j;
			}
		}
			if(position == -1){
				for(j=s-1; j>=1; j--){
					cache[j] = cache[j-1];
				}
			}
			else{
				for(j=position; j>=1; j--){
					cache[j] = cache[j-1];
				}
			}
			cache[0] = input;
	}
	
	for(i=0; i<s; i++){
		printf("%d ", cache[i]);
	}
	
	return 0;
}
