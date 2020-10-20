#include <stdio.h>
#include <math.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		double now = n;
		double ans = n;
		for(int i=1;i<m;i++){
			now = sqrt(now);
			ans += now;
		}
		printf("%.2f\n",ans);
	}
	return 0;
}
