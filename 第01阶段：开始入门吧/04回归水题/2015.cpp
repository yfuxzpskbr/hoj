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
				//ע���һ��ǰ��û�пո� 
				if(first)first=false;
				else cout<<" ";
				printf("%d",sum/t);
				t = 0;
				sum = 0;	
			}
		}
		//ע�ⲻ�ǵ�һ���һ���Ԫ�ؾ�������ո� 
		if(!first&&t!=0)cout<<" ";
		if(t!=0){
			cout<<sum/t;
		}
		/*�ܿӼ��ɣ�ע�������ʽҪ����Ҫ��*/
		cout<<endl;
	}
	return 0;
}
