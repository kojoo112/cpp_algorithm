#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, temp, count;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		temp = i;
		while(temp > 0){
			if(temp%10 == 3){
				count++;
			}
			temp = temp / 10;
		}
	}
	printf("%d", count);
	
	
	return 0;
}
