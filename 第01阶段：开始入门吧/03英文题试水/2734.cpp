#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	while(s!="#"){
		long long sum = 0;
		int len = s.size();
		for(int i=0;i<len;i++){
			if(s[i]!=' '){
				sum += (i+1) * (s[i]-'A'+1);
			}
			else{
				sum += (i+1) * (0);
			}
		}
		cout<<sum<<endl;
		getline(cin,s);
	}
	return 0;
}
