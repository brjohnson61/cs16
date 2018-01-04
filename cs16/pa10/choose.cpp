#include <iostream>
#include <string>

using namespace std;

unsigned long factorials(unsigned long number)
{
	unsigned long x(0);
	if (number >= 2)
	{
		number = (number*factorials(number - 1));
	}
	else
	{
		number = 1;
	}
	
	return number;
}

int main()
{
	unsigned long r, n, output, num, denom, den;

	cout << "Enter r (number of things to choose):" << endl;
	cin >> r;
	cout << "Enter n (the number of things to choose from):" << endl;
	cin >> n;


	num = factorials(n);
	denom = factorials(r);
	den = factorials((n - r));



	if (den <= 0)
	{
		den = 1;
	}

	output = (num / (denom*den));

	cout << "There ";
	if (output != 1)
	{
		cout << "are " << output << " ways ";
	}
	else
	{
		cout << "is " << output << " way ";
	}

	cout << "to choose " << r;

	if (r != 1)
	{
		cout << " things ";
	}
	else
	{
		cout << " thing ";
	}

	cout << "from a set of " << n;

	if (n != 1)
	{
		cout << " things.";
	}
	else
	{
		cout << " thing.";
	}

	cout << endl;

	system("pause");

	return 0;
}