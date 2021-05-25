#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, count=0, temp, check=1;
	scanf("%d", &n);
	temp = n;
	n--;
	
	while(n > 0){
		check++;
		n -= check;
		if(n%check == 0){
			for(i=1; i<check; i++){
				printf("%d + ", (n/check)+i);
			}
			printf("%d = %d\n", (n/check)+i, temp);
			count++;
		}
	}
	printf("%d", count);
	
	
	return 0;
}
