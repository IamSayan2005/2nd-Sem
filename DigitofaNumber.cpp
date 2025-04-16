#include<iostream>

using namespace std;

class digit{
	private:
		int x,count=0;
		public:
			void getdata();
			int calculate(int r);
			void display(){
				cout<<"The Number have "<<calculate(x)<<" Digit"<<endl;
			}
};
void digit::getdata(){
	cout<<"Enter the number:"<<endl;
	cin>>x;
}
int digit::calculate(int r){
	while(x!=0){
    	x=x/10;
    	count++;
	}
	return(count);
}
int main(){
	digit obj;
	obj.getdata();
	obj.display();
	return 0;
}
