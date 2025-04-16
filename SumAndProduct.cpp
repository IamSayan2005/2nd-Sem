#include<iostream>
using namespace std;

class digit{
	public:
		int x,sum=0,product=1,rem;
		void readdata();
		int calculate();
};
void digit::readdata(){
	cout<<"Enter the Number:"<<endl;
	cin>>x;
}
int digit::calculate(){
	rem=x%10;
	sum=sum+rem;
	product=product*rem;
	cout<<"The sum of the Digits is:"<<sum<<;
	cout<<"The product of the Digits is:"<<product<<;
}
int main(){
	digit obj;
	obj.readdata();
	obj.calculate();
	return 0;
}
