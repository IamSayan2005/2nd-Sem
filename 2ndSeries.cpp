/*WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5......*/
#include <iostream>

using namespace std;

class series
{
	int total = 1;

public:
	void sum(int t)
	{
		for (int i = 2; i <= t; i++)
		{
			if (i % 2 != 0)
			{
				total += i;
			}
			else
			{
				total -= i;
			}
		}
		cout << "The Sum is:\n"
				 << total << endl;
	}
};
int main()
{
	int n;
	cout << "Enter the number to result the sum:\n";
	cin >> n;
	series obj;
	obj.sum(n);
	return 0;
}
