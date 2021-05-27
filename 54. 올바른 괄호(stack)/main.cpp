#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);
	stack<char> s;
	char a[50];
	int i;
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]=='('){
			s.push(a[i]);
		} else {
			if(s.empty()){
				printf("NO");
				return 0;
			} else{
				s.pop();
			}
		}
	}
	if(s.empty()){
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}
