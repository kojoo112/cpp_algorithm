#include <stdio.h>
using namespace std;

void recursion(int x){
	if(x > 7){
		return;
	} else {
		// ������ȸ 1 2 4 5 3 6 7
		recursion(x * 2);
		// ������ȸ 4 2 5 1 6 3 7
		recursion(x * 2 + 1);
		// ������ȸ 4 5 2 6 7 3 1 
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	recursion(1);
	
	return 0;
}
