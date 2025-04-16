#include <iostream>

using namespace std;

class evendigit
{
private:
	int x, count = 0, temp;

public:
	void getdata();
	int calculate();
	void display()
	{
		cout << "\nThe Number have " << calculate() << " Even Digit" << endl;
		cout << "\n\n\t--Code execute Successfully--";
	}
};
void evendigit::getdata()
{
	cout << "Enter the number:" << endl;
	cin >> x;
}
int evendigit::calculate()
{
	while (x != 0)
	{
		temp = x;
		temp = x % 10;
		if (temp % 2 == 0)
		{
			count++;
		}
		x = x / 10;
	}
	return count;
}
int main()
{
	evendigit obj;
	obj.getdata();
	obj.display();
	return 0;
}
