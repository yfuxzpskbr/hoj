#include <stdio.h>
double f(int n){
	double ans = 0.0;
	for(int i=1;i<=n;i++){
		if(i&1){//i为奇数 
			ans += 1.0/i;
		}
		else{//i为偶数 
			ans -= 1.0/i;
		} 
	}
	return ans;
}
int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		printf("%.2f\n",f(m));
	}
	return 0;
}
