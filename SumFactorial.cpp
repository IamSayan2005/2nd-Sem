#include<iostream>
#include<math.h>
using namespace std;
class sum{
	private:
		int x,temp,rem,total=0,fact;
		public:
			void readdata();
			int calculate(int p);
			void screen();
};
void sum::readdata(){
	cout<<"Enter the Number:"<<endl;
	cin>>x;
}
int sum::calculate(int p){
temp=x;
	while(temp!=0){
		rem=temp%10;
		fact=1;
		for(int i=1;i<=rem;i++){
		fact=fact*i;
     	}
     	total=total + fact;
    	temp=temp/10;
	}
	return(total);
}
void sum::screen(){
	cout<<"sum of the all Factorial of all digit is:"<<calculate(x)<<endl;
}
int main(){
	sum obj;
	obj.readdata();
	obj.screen();
	return 0;
}
