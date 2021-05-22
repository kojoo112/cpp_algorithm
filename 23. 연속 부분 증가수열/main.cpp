#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, number, i, count=0, temp=0, max=0;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &number);
		if(number >= temp){
			count++;
			if(count > max){
				max = count;
			}
			temp = number;
		} else {
			count = 1;
			temp = number;
		}
	}
	printf("%d", max);
	
	return 0;
}
