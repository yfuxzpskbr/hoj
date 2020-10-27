#include <iostream>
using namespace std;
int main(){
	for(int i=2992;i<=9999;i++){
		int t = i;
		int sum_d = 0;
		while(t){
			sum_d += t%10;
			t/=10;
		}
		t = i;
		int sum_h = 0;
		while(t){
			sum_h += t%16;
			t/=16;
		}
		t = i;
		int sum_12 = 0;
		while(t){
			sum_12 += t%12;
			t/=12;
		}
		if(sum_d == sum_h && sum_h == sum_12){
			cout<<i<<endl;
		}
	}
	return 0;
} 
