#include <cstdio>
using namespace std;
int main(){
	double a;
	while(scanf("%lf",&a)!=EOF){
		printf("%.2f\n",a>0?a:-a);
	}
	return 0;
}
