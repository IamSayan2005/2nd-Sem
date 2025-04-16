#include <iostream>
#include <math.h>
using namespace std;

class cubedigit
{
private:
    int x, temp, rem, sum = 0;

public:
    void getdata();
    int calculate(int t);
    void output()
    {
        cout << "The Sum of the cube of the All Digit is:" << calculate(x) << endl;
    }
};

void cubedigit::getdata()
{
    cout << "Enter the value of x: " << endl;
    cin >> x;
}

int cubedigit::calculate(int t)
{
    temp = x;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, 3);
        temp = temp / 10;
    }
    return (sum);
}

int main()
{
    cubedigit obj;
    obj.getdata();
    obj.output();
    return 0;
}
