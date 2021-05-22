#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, k, i, sum=0, max;
	scanf("%d %d", &n, &k);
	vector<int> temperature(n);
	
	for(i=0; i<n; i++){
		scanf("%d", &temperature[i]);
	}
	
	for(i=0; i<k; i++){
		sum += temperature[i];
	}
	max = sum;
	
	for(i=k; i<n; i++){
		sum += temperature[i] - temperature[i-k];
		if(sum > max){
			max = sum;
		}
	}
	
	printf("%d", max);
	
	return 0;
}
