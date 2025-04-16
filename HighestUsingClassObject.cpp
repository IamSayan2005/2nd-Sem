#include<iostream>
using namespace std;

class highest{
    public:
    int a,b,c,big=0;
    void getdata();
    int calculate();
    void display();
};
 void highest:: getdata(){
        cout<<"Enter three numbers:"<<endl;
        cin>>a>>b>>c;
    }
int highest:: calculate(){
        if(a>b){
            if(a>c){
                big=a;
            }
            else{
                big=c;
            }
        }
        else if(b>c){
            big=b;
        }
        else{
            big=c;
        }
    }
void highest :: display(){
    cout<<"The Highest Number is:"<<big<<endl;
}
int main(){
    highest obj;
    obj.getdata();
    obj.calculate();
    obj.display();
    return 0;
}
