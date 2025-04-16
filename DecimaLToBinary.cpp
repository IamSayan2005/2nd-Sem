
/*Decimal to binary*/
#include<iostream>
#include<math.h>
using namespace std;
class binary{
	private:
		int x,r,sum=0,i=0;
		public:
			
			void getdata();
			int code();
			void display(){
				cout<<"\nBinary Number is:"<<code()<<endl;
				 cout<<"\n\n\t--Code execute Successfully--";
			}
};
void binary::getdata(){
	cout<<"Enter the Number to convert Binary:"<<endl;
	cin>>x;
}
int binary::code(){
	while(x!=0){
		r=x%2;
		sum=sum+(r*pow(10,i));
		i++;
		x/=2;
	}
	return sum;
}
int main(){
	binary obj;
	obj.getdata();
	obj.display();
	return 0;
}
