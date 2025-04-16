#include <iostream>

using namespace std;

class reverse
{
private:
    int x, temp, rem, sum = 0;

public:
    void getdata();
    int check(int t);
    void output()
    {
        cout << "The reverse of the number is:" << check(x) << endl;
        cout << "\n\n\t--Code execute Sucessfylly--";
    }
};

void reverse::getdata()
{
    cout << "Enter the value of x: " << endl;
    cin >> x;
}

int reverse::check(int t)
{
    temp = t;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    return (sum);
}

int main()
{
    reverse obj;
    obj.getdata();
    obj.output();
    return 0;
}
