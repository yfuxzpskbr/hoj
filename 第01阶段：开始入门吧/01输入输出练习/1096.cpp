#include <iostream>
using namespace std;
int main(){
	int n,m,a,sum;
	cin>>n;
	for(int i=0;i<n;i++){
		sum = 0;
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>a;
			sum+=a;
		}
		if(i!=n-1)
			cout<<sum<<endl<<endl;
		else
			cout<<sum<<endl;
	}
	return 0;
} 
