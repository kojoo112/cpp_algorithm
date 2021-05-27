#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int i, j, sum, result, temp, average, min;
	vector<vector <int>> input (10, vector<int>(10));
	for(i=1; i<=9; i++){
		sum = 0;
		for(j=1; j<=9; j++){
			scanf("%d", &input[i][j]);
			sum += input[i][j];
		}
		average = (sum/9.0)+0.5;
		printf("%d ", average);
		min=2147000000;
		for(j=1; j<=9; j++){
			temp = abs(input[i][j]-average);
			if(temp < min){
				min = temp;
				result = input[i][j];
			} else if (temp == min){
				if(result < input[i][j]){
					result = input[i][j];
				}
			}
		}
		printf("%d\n", result);
	}
	
	
	
	return 0;
}
