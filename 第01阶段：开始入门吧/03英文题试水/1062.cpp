#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		char s[1001];
		gets(s);
		/*
		避坑提示：
		可能有多个空格
		例如
		###    olleh   !dlrow   ###			翻转后为
		###    hello   world!   ###
		*/
		bool tag = false;
		bool first = true;
		int left = 0,right = 0;//记录左右端点 
		for(int i=0;s[i]!='\0';i++){
			if(!tag && s[i]!=' '){
				tag = true;//表示确定了左端 
				left = i;
			}
			if(tag && (s[i+1]=='\0'||s[i+1]==' ')){
				tag = false;//表示确定好了右端，即将确定下一次左端，但还没确定下一次左端 
				right = i;
				reverse(s+left,s+right+1);
			}
		}
		cout<<s<<endl;
	}
	return 0;
} 
