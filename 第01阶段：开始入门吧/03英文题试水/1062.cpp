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
		�ܿ���ʾ��
		�����ж���ո�
		����
		###    olleh   !dlrow   ###			��ת��Ϊ
		###    hello   world!   ###
		*/
		bool tag = false;
		bool first = true;
		int left = 0,right = 0;//��¼���Ҷ˵� 
		for(int i=0;s[i]!='\0';i++){
			if(!tag && s[i]!=' '){
				tag = true;//��ʾȷ������� 
				left = i;
			}
			if(tag && (s[i+1]=='\0'||s[i+1]==' ')){
				tag = false;//��ʾȷ�������Ҷˣ�����ȷ����һ����ˣ�����ûȷ����һ����� 
				right = i;
				reverse(s+left,s+right+1);
			}
		}
		cout<<s<<endl;
	}
	return 0;
} 
