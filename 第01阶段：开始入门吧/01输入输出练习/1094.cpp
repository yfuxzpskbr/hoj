#include <iostream>
using namespace std;
int main(){
	int n,a,sum;
	while(cin>>n){
		if(n==0)continue;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
	}
	return 0;
}
