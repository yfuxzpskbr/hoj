#include <cstdio>
#define PI 3.1415927
using namespace std;
int main(){
	double r;
	while(scanf("%lf",&r)!=EOF){
		printf("%.3f\n",4.0/3.0*PI*r*r*r);
	}
	return 0;
}
