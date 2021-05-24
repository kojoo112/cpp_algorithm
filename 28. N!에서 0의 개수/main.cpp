#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, temp;
	scanf("%d", &n);
	vector<int> prime(n+1);
	
	for(i=2; i<=n; i++){
		temp = i;
		j = 2;
		while(j <= 5){
			if(temp%j == 0){
				temp = temp / j;
				prime[j]++;
			} else {
				j++;
			}
		}
	}
	printf("%d", prime[5]);
	
	return 0;
}
