#include <stdio.h>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	char input[101], output[101];
	int i, index=0;
	gets(input); // 빈칸을 받을떄는 gets를 사용해야함 
	
	for(i=0; input[i]!='\0'; i++){
		if(input[i] != ' '){
			if(input[i] >= 65 && input[i] <= 90){
				output[index++] = input[i] + 32;
			} else {
				output[index++] = input[i];
			}
		}
	}
	output[index]='\0';
	printf("%s", output);
	
	return 0;
}
