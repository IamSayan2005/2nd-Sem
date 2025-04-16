#include<iostream>

using namespace std;

class NumberSwapper{
	public:
		int swapNumbers(int* a,int* b){
			int temp= *a;
			*a=*b;
			*b=temp;
		}
};
int main(){
	int num1,num2;
	cout<<"Enter the first number:\n";
	cin>>num1;
	cout<<"Enter the second number:\n";
	cin>>num2;
	cout<<"Before swapping: "<<"Number(1):"<<num1<<",Number(2):"<<num2<<endl;
	NumberSwapper obj;
	obj.swapNumbers(&num1, &num2);
	cout<<"After swapping: "<<"Number(1):"<<num1<<" Number(2)"<<num2<<endl;
	return 0;
}

