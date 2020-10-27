#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		bool first = true;
		int sum = 0;
		int t = 0;
		for(int i=2;i<=2*n;i+=2){
			sum += i;
			t++;
			if(t==m){
				//注意第一个前面没有空格 
				if(first)first=false;
				else cout<<" ";
				printf("%d",sum/t);
				t = 0;
				sum = 0;	
			}
		}
		//注意不是第一个且还有元素就输出个空格 
		if(!first&&t!=0)cout<<" ";
		if(t!=0){
			cout<<sum/t;
		}
		/*避坑技巧：注意输出格式要符合要求*/
		cout<<endl;
	}
	return 0;
}
