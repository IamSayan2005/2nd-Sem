#include<iostream>
using namespace std;

class sample{
	int x,y,z;
	public:
		void getdata(int a,int b,int c);
		void display();
		void operator -(int a,int b,int c);
};
void sample::getdata(int a,int b,int c){
	x=a;
	y=b;
	z=c;
}
void sample::operator --(int a,int b,int c){
	x= -a;
	y= -b;
	z= -c;
}
void sample::display(){
	cout<<"x="<<x<<",";
	cout<<"y="<<y<<",";
	cout<<"z="<<z<<".\n";
}
int main(){
	sample obj;
	obj.getdata(10,-20,20);
	cout<<"Before Negation:"<<endl;
	obj.display();
	cout<<"After Negation:"<<endl;
	--obj;
	obj.display();
	return 0;
}

