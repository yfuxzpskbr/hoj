#include <iostream>
using namespace std;
int data[101];
int main(){
	int n,m;
	cin>>n>>m;
	while(n!=0 || m!=0){
		for(int i=0;i<n;i++)
			cin>>data[i];
		/*²åÅÅË¼Ïë*/
		int target = m;
		int index = n-1;
		while(index!=-1 && target < data[index]){
			data[index+1] = data[index];
			index--;
		}
		data[index+1] = target;
		bool first = true;
		for(int i=0;i<=n;i++){
			if(first)first = false;
			else cout<<" ";
			cout<<data[i];
		}
		cout<<endl;
		cin>>n>>m;
	}
	return 0;
} 
