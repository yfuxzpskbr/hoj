#include <cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int t;
		int sum = 0;
		int min = 0x7fffffff;
		int max = 0x80000000;
		for(int i=0;i<n;i++){
			scanf("%d",&t);
			if(t>max) max = t;
			if(t<min) min = t;
			sum+=t;
		}
		sum -=(min+max);
		printf("%.2f\n",sum*1.0/(n-2));
	}
}
