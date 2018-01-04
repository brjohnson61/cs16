#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int numDoubles;
	double test;
	double avg, total(0);

	cout << "Enter numDoubles:" << endl;
	cin >> numDoubles;

	double* numbers = new double[numDoubles];

	cout << "Enter doubles (each on a new line):" << endl;

	for (int n = 0; n < numDoubles; n++)
	{
		numbers[n] = 0;
	}

	for (int i = 0; i < numDoubles; i++)
	{
		cin >> numbers[i];
	}

	for (int p = 0; p < numDoubles; p++)
	{
		total = total + numbers[p];
	}

	delete numbers;

	double denom = numDoubles;

	avg = total / denom;

	cout << "The average is:"<< endl << fixed << setprecision(3) << avg << endl;

	return 0;
}