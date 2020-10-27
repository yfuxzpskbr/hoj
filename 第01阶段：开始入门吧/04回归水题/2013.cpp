#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		long t=1;
		for(int i=1;i<=n-1;i++){
			t = 2*(t+1);
		}
		cout<<t<<endl;
	}
	return 0;
}
