#include <stdio.h>
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		bool first = true;
		for(int i=1;i<=9;i++){
			for(int j=0;j<=9;j++){
				for(int k=0;k<=9;k++){
					if(i*100+j*10+k<m)continue;
					if(i*100+j*10+k>n)break;
					if(i*100+j*10+k == i*i*i + j*j*j +k*k*k){
						if(first)first = false;
						else printf(" ");
						printf("%d",i*100+j*10+k);
					}
				}
			}
		}
		if(first)printf("no");
		printf("\n");
	}
	return 0;
}
