#include <iostream>

using namespace std;

class factors
{
private:
  int num;

public:
  void gets();
  void calculate();
};
void factors::gets()
{
  cout << "Enter the number to get factors:\n";
  cin >> num;
}
void factors::calculate()
{
  int temp = num;
  cout << "Factors are:\n";
  for (int i = 1; i <= num; i++)
  {
    if (temp % i == 0)
    {
      cout << i ;
      if (temp % i == 0 && i < num)
      {
        cout << ",";
      }
      else if ((temp % i == 0 )&& (i = num))
      {
        cout << ".";
      }
    }
  }
}
int main()
{
  factors obj;
  obj.gets();
  obj.calculate();
  return 0;
}
