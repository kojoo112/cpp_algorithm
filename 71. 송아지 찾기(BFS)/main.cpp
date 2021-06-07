#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int check[10001], d[3]={1, -1, 5};

int main(){
	//freopen("input.txt", "rt", stdin);
	int start, end, position, x, i;
	queue<int> Q;
	scanf("%d %d", &start, &end);
	check[start]=1;
	Q.push(start);
	while(!Q.empty()){
		x = Q.front();
		Q.pop();
		for(i=0; i<3; i++){
			position = x + d[i];
			if(position<=0 || position>10000){
				continue;
			}
			if(position == end) {
				printf("%d", check[x]);
				return 0;
			}
			if(check[position] == 0){
				check[position] = check[x]+1;
				Q.push(position);
			}
		}
	}
	
	return 0;
}
