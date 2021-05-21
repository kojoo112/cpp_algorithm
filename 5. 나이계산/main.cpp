#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	//Resident Registration Number 주민등록번호 이하 rrn
	// 2019년 기준
	// 뒷자리 1,3 M  2,4 W 
	char gender=' ', rrn[15];
	int age, year;
	scanf("%s", &rrn);
	
	if(rrn[7] == '1' || rrn[7] == '2'){
		year =  1900 + ((rrn[0]-48) * 10 + (rrn[1]-48));
	} else if(rrn[7] == '3' || rrn[7] == '4'){
		year = 2000 + ((rrn[0]-48) * 10 + (rrn[1]-48));
	}
	age = 2019 - year + 1;
	printf("%d ", age);
	
	if(rrn[7] == '1' || rrn[7] == '3'){
		printf("M");
	} else {
		printf("W");
	}
	
	return 0;
}
