#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int m,n;
	long long x,y;
	while(scanf("%d%d",&m,&n)!=EOF){
		x = 0;
		y = 0;
		/*
		！！！此题陷阱，没有说第一个数一定比第二个数小，如果第一个数比
		第二个数大，就需要先交换一下。意思是 1 3 表示[1,3] 3 1 也表示[1,3]
		*/
		if(m>n){
			m ^= n;
			n ^= m;
			m ^= n;
		}
		for(int i=m;i<=n;i++){
			if(i&1){
				y += i*i*i;
			}else{
				x += i*i;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
