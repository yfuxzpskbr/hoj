#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int m,n;
	long long x,y;
	while(scanf("%d%d",&m,&n)!=EOF){
		x = 0;
		y = 0;
		/*
		�������������壬û��˵��һ����һ���ȵڶ�����С�������һ������
		�ڶ������󣬾���Ҫ�Ƚ���һ�¡���˼�� 1 3 ��ʾ[1,3] 3 1 Ҳ��ʾ[1,3]
		*/
		if(m>n){
			m ^= n;
			n ^= m;
			m ^= n;
		}
		for(int i=m;i<=n;i++){
			if(i&1){
				y += i*i*i;
			}else{
				x += i*i;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
