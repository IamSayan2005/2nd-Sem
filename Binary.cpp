//.Decimal to binary.
#include<iostream>
#include<math.h>
using namespace std;
class binary {
	public:
		int x,a,i=0,c=0;
		void getdata();
		int convert();
		int display(){
			cout<<"The Binary number is:"<<c<<endl;
		}
};
void binary::getdata(){
	cout<<"Enter the Binary Nuumber to convert Decimal form:"<<endl;
	cin>>x;
}
int binary::convert(){
	while(x!=0){
		a=x%2;
		c=c+(a*pow(10,i));
		i++;
		x=x/2;
	}
	return c;
}
int main(){
	binary obj;
	obj.getdata();
    obj.display();
    return 0;
}

