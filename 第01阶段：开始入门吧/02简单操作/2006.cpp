#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n,a;
	long long ans;
	while(scanf("%d",&n)!=EOF){
		ans = 1;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			if(a&1){
				ans*=a;
			}
		}
		printf("%d\n",ans); 
	}
	return 0;
}
