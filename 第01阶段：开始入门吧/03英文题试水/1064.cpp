#include <iostream>
#include <stdio.h>
int main(){
	double sum = 0.0;
	double a;
	for(int i=0;i<12;i++){
		std::cin>>a;
		sum+=a;
	}
	printf("$%.2f\n",sum/12.0);
	return 0;
}
