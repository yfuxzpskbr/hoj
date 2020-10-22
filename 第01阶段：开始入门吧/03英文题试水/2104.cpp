#include <iostream>
using namespace std;
long long gcd(long long a,long long b){
	long long r = a % b;
	while(r!=0){
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
int main(){
	/*
	这题的本质是判断互质 
	*/
	long long n,m;
	cin>>n>>m;
	while(!(n==-1&&m==-1)){
		if(gcd(m,n)==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"POOR Haha"<<endl;
		}
		cin>>n>>m;
	}
	return 0;
} 
