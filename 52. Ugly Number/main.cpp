#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, p2, p3, p5, min= 2147000000;
	vector<int> ugly_number(1501, 0);
	ugly_number[1] = 1;
	p2=p3=p5=1;
	scanf("%d", &n);
	
	for(i=2; i<=n; i++){
		if(ugly_number[p2]*2 < ugly_number[p3]*3){
			min = ugly_number[p2] * 2;
		} else {
			min = ugly_number[p3] * 3;
		}
		if(ugly_number[p5]*5 < min){
			min = ugly_number[p5] * 5;
		}
		
		if(ugly_number[p2]*2 == min){
			p2++;
		}
		if(ugly_number[p3]*3 == min){
			p3++;
		}
		if(ugly_number[p5]*5 == min){
			p5++;
		}
		ugly_number[i] = min;
	}
	printf("%d", min);
		
	return 0;
}
