#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int num;
	priority_queue<int> pQ;
	while(true){
		scanf("%d", &num);
		if(num == -1){
			break;
		}
		if(num == 0){
			if(pQ.empty()){
				printf("-1\n");
			} else {
				printf("%d\n", pQ.top());
				pQ.pop();
			}
		} else {
			pQ.push(num);
		}
	}
	
	return 0;
}
