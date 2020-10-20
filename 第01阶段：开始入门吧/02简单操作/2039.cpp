#include <iostream>
using namespace std;
int main(){
	int n;
	double a,b,c;	//并没有说不能是小数，只说是正数，因此考虑到有小数的情况 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(a+b>c&&b+c>a&&a+c>b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
