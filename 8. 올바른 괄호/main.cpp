#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	char input[31];
	int i, count=0;
	scanf("%s", &input);
	
	for(i=0; input[i]!='\0'; i++){
		if(input[i] == '('){
			count++;
		} else if(input[i] == ')'){
			count--;
		}
		if(count < 0){
			printf("NO");
			return 0;
		}
	}
	if(count == 0){
		printf("YES");
	} else{
		printf("NO");
	}
	
	return 0;
}
