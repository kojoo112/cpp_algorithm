#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int a[11], b[11], a_score=0, b_score=0, last_winner=0, i;
	
	for(i=1; i<=10; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<=10; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=1; i<=10; i++){
		if(a[i] == b[i]){
			a_score++;
			b_score++;
		} else if(a[i] > b[i]){
			a_score += 3;
			last_winner = 1;
		} else if(a[i] < b[i]){
			b_score += 3;
			last_winner = 2;
		}
	}
	
	printf("%d %d\n", a_score, b_score);
	
	if(a_score == b_score){
		if(last_winner == 1){
			printf("A");
		} else if (last_winner == 2){
			printf("B");
		} else{
			printf("D");
		}
	} else if(a_score > b_score){
		printf("A");
	} else{
		printf("B");
	}
	
	return 0;
}
