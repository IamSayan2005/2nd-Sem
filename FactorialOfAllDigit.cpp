#include <iostream>
using namespace std;

class factorial
{
private:
  int num, temp, sum = 0,rem, fact;

public:
  void in()
  {
    cout << "Enter the number to get sum of the factorial:\n";
    cin >> num;
  }
  int calculate();
  void output();
};
int factorial::calculate()
{
  temp = num;
  while (temp != 0)
  {
    rem=temp%10;
    fact=1;
    for (int i = 1; i <= rem; i++)
    {
      fact *=i;
    }
    sum +=fact;
    temp=temp/10;
  }
}
void factorial::output()
{
  cout << "The sum of the factorial of the number is :" << sum;
}
int main()
{
  factorial obj;
  obj.in();
  obj.calculate();
  obj.output();
  return 0;
}
