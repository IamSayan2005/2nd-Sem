#include<iostream>
using namespace std;
int main(){
	int m,n,big;
	cout<<"Enter the value of m and n:"<<endl;
	cin>>m>>n;
	if(m>n){
		big=m;
	}
	else{
		big=n;
	}
	cout<<"The highest No:"<<big;
}

