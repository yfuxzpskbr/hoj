#include <iostream>
using namespace std;
int main(){
	int n;
	double a;
	scanf("%d",&n);
	while(n!=0){
		int num_ = 0;
		int num_0 = 0;
		int num = 0;
		for(int i=0;i<n;i++){
			scanf("%lf",&a);
			if(a>0) num++;
			else if(a<0)num_++;
			else num_0++;
		}
		printf("%d %d %d\n",num_,num_0,num);
		scanf("%d",&n);
	}
	return 0;
} 
