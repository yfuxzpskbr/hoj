#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char c;
		int a,b;
		cin>>c>>a>>b;
		switch(c){
			case '+':
				cout<<a+b<<endl;
				break;
			case '-':
				cout<<a-b<<endl;
				break;
			case '*':
				cout<<a*b<<endl;
				break;
			case '/':
				/*
				避坑大法：
				题目说的是仅当结果不是整数保留两位小数
				因此整除时，不用保留两位小数！！！ 
				*/
				if(a%b!=0)printf("%.2f\n",a*1.0/b);
				else printf("%d\n",a/b);
				break;
		}
	}
	return 0;
}
