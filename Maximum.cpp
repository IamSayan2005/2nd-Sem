#include <iostream>
using namespace std;

class maximum
{
	int num, big, arr[20];

public:
	void input();
	int check();
	void display()
	{
		cout << "Maximum among the number is:\n"
				 << big;
		cout << "\n\n\t--Code execute Sucessfylly--";
	}
};
void maximum::input()
{
	cout << "Enter the how many numbers:\n";
	cin >> num;
	cout << "Enter numbers:\n";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
int maximum::check()
{
	big = arr[0];
	for (int i = 1; i < num; i++)
	{
		if (arr[i] > arr[0])
		{
			big = arr[i];
		}
	}
}
int main()
{
	maximum obj;
	obj.input();
	obj.check();
	obj.display();
	return 0;
}
