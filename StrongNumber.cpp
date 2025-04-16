#include <iostream>

using namespace std;
class strong
{
private:
	int x, temp, rem, total = 0, fact;

public:
	void readdata();
	int check();
	void screen();
};
void strong::readdata()
{
	cout << "Enter the Number:" << endl;
	cin >> x;
}
int strong::check()
{
	temp = x;
	while (temp != 0)
	{
		rem = temp % 10;
		fact = 1;
		for (int i = 1; i <= rem; i++)
		{
			fact = fact * i;
		}
		total = total + fact;
		temp = temp / 10;
	}
}
void strong::screen()
{
	if (total == x)
	{
		cout << "The Number Is Strong." << endl;
	}
	else
	{
		cout << "The Number is Not a Strong Number." << endl;
	}
}
int main()
{
	strong obj;
	obj.readdata();
	obj.check();
	obj.screen();
	return 0;
}
