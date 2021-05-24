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
		while(j <= temp){
			if(temp%j == 0){
				temp = temp / j;
				prime[j]++;
			} else {
				j++;
			}
		}
	}
	printf("%d! = ", n);
	
	for(i=2; i<=n; i++){
		if(prime[i] != 0){
			printf("%d ", prime[i]);
		}
	}
	
	return 0;
}
