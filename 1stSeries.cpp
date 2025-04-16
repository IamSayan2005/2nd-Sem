/*WAP to compute the sum of the first n terms of the following series S = 1+1/2+1/3+1/4+.....*/
#include <iostream>

using namespace std;

class series
{
	float total = 1.0;

public:
	void sum(int t)
	{
		for (int i = 2; i <= t; i++)
		{
			total += 1.0 / i;
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
