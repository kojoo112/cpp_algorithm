#include <stdio.h>
using namespace std;
int data[10], temp[10];

void divide(int left, int right){
	int mid, i, position1, position2, position3;
	if(left < right){
		mid=(left+right)/2;
		divide(left, mid);
		divide(mid+1, right);
		position1 = left;
		position2 = mid+1;
		position3 = left;
		while(position1<=mid && position2<=right){
			if(data[position1] < data[position2]){
				temp[position3++] = data[position1++];
			} else {
				temp[position3++] = data[position2++];
			}
		}
		while(position1<=mid) {
			temp[position3++] = data[position1++];
		}
		while(position2<=right) {
			temp[position3++] = data[position2++];
		}
		for(i=left; i<=right; i++){
			data[i] = temp[i];
		}
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &data[i]);
	}
	divide(1, n);
	for(i=1; i<=n; i++){
		printf("%d ", data[i]);
	}
	
	return 0;
}
