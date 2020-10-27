#include <iostream>
using namespace std;
int data[100];
int main(){
	int n;
	cin>>n;
	while(n!=0){
		int min = 0;
		for(int i=0;i<n;i++){
			cin>>data[i];
			if(data[i] < data[min])min = i;
		}
		int t = data[min];
		data[min] = data[0];
		data[0] = t;
		bool first = true;
		for(int i=0;i<n;i++){
			if(first)first = false;
			else cout<<" ";
			cout<<data[i];
		}
		cout<<endl;
		cin>>n;
	} 
	return 0;
} 
