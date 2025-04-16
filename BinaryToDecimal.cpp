 //.Binary to Decimal.
#include<iostream>
#include<math.h>
using namespace std;
class decimal{
	int x,a,i=0,c;
	public:
		void getdata();
		int convert();
		int display(){
			cout<<"\nThe Decimal number is: "<<convert()<<endl;
			 cout<<"\n\n\t--Code execute Successfully--";
		}
};
void decimal::getdata(){
	cout<<"Enter the binary number to convert decimal:"<<endl;
	cin>>x;
}
int decimal::convert(){
	while(x!=0){
		a=x%2;
		c=c+(a*pow(2,i));
		i++;
		x=x/10;
	}
	return c;
}
int main(){
	decimal obj;
	obj.getdata();
	obj.display();
	return 0;
}

