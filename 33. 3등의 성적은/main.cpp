#include <stdio.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j, index, temp, score[101], count=0;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &score[i]);
	}
	
	for(i=0; i<n-1; i++){
		index = i;
		for(j=i+1; j<n; j++){
			if(score[j] > score[index]){	// 오름차순 내림차순
				index = j;
			}
		}
		temp = score[i];
		score[i] = score[index];
		score[index] = temp;
	}
    
	for(i=1; i<n; i++){
		if(score[i] != score[i-1]){
			count++;
		}
		if(count == 2){
			printf("%d ", score[i]);
			break;
		}
	}
	
	
	return 0;
}
