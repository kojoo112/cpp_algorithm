#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	char hydrocarbon[10];
	int c=0, h=0, i, h_position;
	scanf("%s", &hydrocarbon);
	
	if(hydrocarbon[1] == 'H'){
		c = 1;
		h_position = 1;
	} else{
		for(i=1; hydrocarbon[i]!= 'H'; i++){
			c = c * 10 + (hydrocarbon[i] - 48);
		}
		h_position = i;
	}
	
	if(hydrocarbon[h_position+1] == '\0'){
		h = 1;
	} else{
		for(i=h_position+1; hydrocarbon[i]!='\0'; i++){
			h = h * 10 + (hydrocarbon[i]- 48);
		}
	}
	printf("%d ", c*12 + h);
	
	return 0;
}
