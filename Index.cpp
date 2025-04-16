#include <iostream>

using namespace std;
class GCDGenarator
{
	public:
	int gcdRecursion(int a,int b){
		if(b==0){
			return a;
		}
		return gcdRecursion(b,a%b);
	}
	int gcdIteration(int a,int b){
		if(b==0){
			return a;
		}
		while(b!=0){
			int temp=b;
			b=a%b;
			a=temp;
		}
		return a;
	}
};
int main(){
	int num1,num2;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	GCDGenarator obj;
	cout<<"GCD of"<<num1<<","<<num2<<" using Recursion is: "<<obj.gcdRecursion(num1,num2)<<endl;
	cout<<"GCD of"<<num1<<","<<num2<<" using Iteration is: "<<obj.gcdIteration(num1,num2)<<endl;
	return 0;

}
