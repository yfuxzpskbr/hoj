#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		int cnt = 0;
		int len = s.size();
		for(int i=0;i<len;i++){
			if(s[i]>='0' && s[i]<='9'){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
} 
