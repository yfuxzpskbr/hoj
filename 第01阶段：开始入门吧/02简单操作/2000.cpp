#include <iostream>
using namespace std;
int main(){
	char a,b,c;
	while(cin>>a>>b>>c){
		if(a>b){
			char t=a;
			a=b;
			b=t;
		}
		if(a>c){
			char t=a;
			a=c;
			c=t;
		}
		if(b>c){
			char t = b;
			b = c;
			c = t;
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
} 
