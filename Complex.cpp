#include<iostream>

using namespace std;

class complex{
	float x;
	float y;
	public:
		complex(){	}
		complex(float real,float imag)
		{x=real;y=imag;}
		complex operator +(complex);
		void display();
};
complex complex::operator +(complex c){
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return(temp);
}
void complex::display(){
	cout<<x<<"+i"<<y<<"\n";
}
int main(){
	complex c1,c2,c3;
	c1=complex(2,8);
	c2=complex(5,6);
	c3=c1+c2;
	cout<<"C1= ";c1.display();
	cout<<"C2= ";c2.display();
	cout<<"C3= ";c3.display();
	return 0;
}
