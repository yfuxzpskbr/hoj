#include <stdio.h>
double f(int n){
	double ans = 0.0;
	for(int i=1;i<=n;i++){
		if(i&1){//iΪ���� 
			ans += 1.0/i;
		}
		else{//iΪż�� 
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
