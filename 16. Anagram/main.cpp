#include <stdio.h>
#include <algorithm>
using namespace std;
int a[60], b[60];

int main(){
	//freopen("input.txt", "rt", stdin);
	char str[101]; // A~Z 65~90, a~z 97~122
	int i;
	scanf("%s", &str);
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			a[str[i]-48]++;
		} else{
			a[str[i]-70]++;
		}
	}
	scanf("%s", &str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			b[str[i]-48]++;
		} else{
			b[str[i]-70]++;
		}
	}
	
	for(i=1; i<=52; i++){
		if(a[i]!=b[i]){
			printf("NO");
			exit(0);
		} 
	}
	printf("YES");
	
	return 0;
}
