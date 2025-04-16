#include<iostream>
using namespace std;

class Highest {
private:
    int m, n;

public:
    void getdata();
    int largest();
    void display();
};

void Highest::getdata() {
    cout << "Enter two numbers:\n";
    cin >> m >> n;
}

int Highest::largest() {
    if (m > n)
        return m;
    else
        return n;
}

void Highest::display() {
    cout << "The highest number is: " << largest() << endl;
}

int main() {
    Highest obj;
    obj.getdata();
    obj.display();

    return 0;
}

