#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	/*
	这是一个经典的递归题目
	此题递归表达式：f(n) = f(n-1) + f(n-3);
	
	递归通式关键看，小牛长大需要几年。
	例如：此题小牛从第四个年头开始产小牛，说明小牛长大需要三年。
	
	因此，假设小牛长大需要 a 年（注意这个年数的找法，找到第一次小牛产小牛的年头
	，减去小牛出生的年头即可） 
	此时：第n年有牛数：f(n) = f(n-1) + f(n-a)
	 
	*/
	while(n!=0){
		if(n==1){//处理1年 
			cout<<1<<endl;
			cin>>n;
			continue;
		}
		if(n==2){//处理两年 
			cout<<2<<endl;
			cin>>n;
			continue;
		}
		if(n==3){//处理三年 
			cout<<3<<endl;
			cin>>n;
			continue;
		}
		/*以上因为没有一头小牛长大，因此单独处理*/
		/*以下至少有一头小牛长大，因此递归处理*/
		int f_3 = 1;	//前3年牛数 
		int f_2 = 2;	//前2年牛数 
		int f_1 = 3;	//前1年牛数 
		int f_n = 0;	//今年牛数 
		for(int i=4;i<=n;i++){//从第四年起开始算 
			f_n = f_1 + f_3;//递归表达式
			
			//值的传递，注意顺序，不可颠倒顺序
			//因为f_3原来的值不需要了，所以可以抛弃，所以最先更新f_3的值。 
			f_3 = f_2;
			f_2 = f_1;
			f_1 = f_n; 
		}
		cout<<f_n<<endl;
		cin>>n;
	}
	return 0;
}
