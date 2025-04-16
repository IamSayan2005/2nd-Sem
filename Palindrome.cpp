#include<iostream>

using namespace std;

class palindrome{
    private:
        int x, temp, rem, sum= 0;
    public:
        void getdata();
        int check();
};

void palindrome::getdata(){
    cout << "Enter the value of x: " << endl;
    cin >> x;
}

int palindrome::check(){
    temp = x;
    while(temp != 0){
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }

    if(sum == x){
        cout <<"The Number "<<sum<< " is palindrome." << endl;
    }
    else{
        cout << "The number "<<sum<<" is not palindrome." << endl;
    }
}

int main(){
    palindrome obj;
    obj.getdata();
    obj.check();
    return 0;
}

