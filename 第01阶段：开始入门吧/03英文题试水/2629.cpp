#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	cin>>n;
	char ID[19];
	for(int i=0;i<n;i++){
		cin>>ID;
		int location =(int)((ID[0]-'0')*10 + ID[1]-'0');
		string s;
		switch(location){
			case 33:
				s = "Zhejiang";
				break;
			case 11:
				s = "Beijing";
				break;
			case 71:
				s = "Taiwan";
				break;
			case 81:
				s = "Hong Kong";
				break;
			case 82:
				s = "Macao";
				break;
			case 54:
				s = "Tibet";
				break;
			case 21:
				s = "Liaoning";
				break;
			case 31:
				s = "Shanghai";
				break;
		}
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",
		s.c_str(),ID[10],ID[11],ID[12],ID[13],ID[6],ID[7],ID[8],ID[9]);
	}
	return 0;
}
