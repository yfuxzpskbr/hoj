#include <iostream>
#include <stdio.h>
using namespace std;
bool isYear(int year){
	return (year%400==0 || (year%4==0&&year%100!=0));
}
int dayOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int y,m,d,day;
	while(scanf("%d%*['/']%d%*['/']%d%*['/']",&y,&m,&d)!=EOF){
		day = 0;
		dayOfMonth[1] = 28;
		if(isYear(y))dayOfMonth[1]=29;
		for(int i=0;i<m-1;i++){
			day+=dayOfMonth[i];
		}
		for(int i=1;i<=d;i++){
			day++;
		}
		printf("%d\n",day);
	}
	return 0;
} 
