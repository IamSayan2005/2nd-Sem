// Check a matrix is null matrix or not.
#include<iostream>
using namespace std;

class matrix{
	int a[10][10],x,y,count=0;
	public:
		void getdata();
		void check();
		int display();
};
void matrix::getdata(){
	cout<<"Enter the Row & Coloumn:\n";
	cin>>x>>y;
	cout<<"Enter the Matrix Elements:\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>a[i][j];
		}
	}
}
void matrix::check(){
	for(int i=0;i<x;i++){
		for(int j =0;j<y;j++){
			if(a[i][j]!=0){
				count++;
			}
		}
	}
}
int matrix::display(){
	if(count==0){
		cout<<"Input matrix is a null matrix.";
		 cout<<"\n\n\t--Code execute Successfully--";

	}
	else{
		cout<<"Input matrix is not a null matrix.";
		 cout<<"\n\n\t--Code execute Successfully--";
	}
}
int  main(){
	matrix obj;
	obj.getdata();
	obj.check();
	obj.display();
	return 0;
}
