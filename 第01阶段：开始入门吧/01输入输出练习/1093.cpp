#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	int sum = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		sum = 0;
		for(int j=0;j<a;j++){
			cin>>b;
			sum+=b;
		} 
		cout<<sum<<endl;
	}
	return 0;
}
