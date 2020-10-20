#include <iostream>
using namespace std;
int main(){
	int n,a;
	int sum = 0;
	cin>>n;
	while(n!=0){
		sum = 0;
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
		cin>>n; 
	}
	return 0;
}
