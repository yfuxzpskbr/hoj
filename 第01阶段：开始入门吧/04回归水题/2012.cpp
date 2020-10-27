#include <iostream>
using namespace std;
int vis[2600];
void init(){
	vis[1] = 1;
	vis[0] = 1;
	for(int i=2;i*i<=2600;i++){
		int t = 2;
		while( t* i<2600){
			vis[t*i] = 1;
			t++;
		}
	}
}
int f(int t){
	return t*t+t+41; 
}
int main(){
	init();
	int x,y;
	cin>>x>>y;
	while(x!=0 || y!=0){
		bool tag = true;
		for(int i=x;i<=y;i++){
			if(vis[f(i)]){
				tag = false;
				break;
			}
		}
		if(tag){
			cout<<"OK"<<endl;
		}
		else{
			cout<<"Sorry"<<endl;
		}
		cin>>x>>y;
	}
	return 0;
}
