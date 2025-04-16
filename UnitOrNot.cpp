#include<iostream>
using namespace std;
class diagonal{
	int a[10][10],x,y,t=0,c=0;
	
	public:
		void readdata();
		void code();
		void display();
};
void diagonal::readdata(){
	cout<<"Enter the row and column:\n";
	cin>>x>>y;
	if(x==y){
			cout<<"Enter the matrix elements:\n";
           	for(int i=0;i<x;i++){
	        	for(int j=0;j<y;j++){
		        	cin>>a[i][j];
	        	}
        	}
       	}else{
       		cout<<"Unit matrix or not cannot be checked because row and column not equal.";
		   }
}
void diagonal::code(){
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i==j){
				if(a[i][j]!=1){
					t++;
				}
			}else if(i!=j){
				if(a[i][j]!=0){
					c++;
				}
			}
		}
	}
}
void diagonal::display(){
	if(x==y){
		if(t==0 & c==0){
		cout<<"Entering Matrix is unit.";
     	}else{
		cout<<"Entering Matrix is not a unit.";
     	}
	}
}
int main(){
	diagonal obj;
	obj.readdata();
	obj.code();
	obj.display();
	return 0;
}
