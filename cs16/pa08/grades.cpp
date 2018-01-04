#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int count, temp, entries, skip(0), l(0), digits(0), x, numDigits(0);

	cout << "Enter number of grades:" << endl;
	cin >> entries;


	int* grades = new int[entries];
	
	cout << "Enter grades (each on a new line):" << endl;

	for (int i = 0; i < entries; i++)   //takes input into dynamic array.
	{
		cin >> grades[i];
	}

	for (int j = 0; j < (entries-1); j++)   //sorts array into least to greatest.
	{
		for (int k = 0; k < (entries-1); k++)
		{
			if (grades[k] > grades[k + 1])
			{
				temp = grades[k];
				grades[k] = grades[k + 1];
				grades[k + 1] = temp;
			}
		}
	}

	digits = grades[entries - 1]; //finds length of largest digit.

	string a = to_string(digits);

	numDigits = a.length();
	
	cout << "Histogram:" << endl;

	for (int i = 0; i < entries; i++)  //count is number of asterisks that should be put.
	{
		count = 1;
		if (grades[i] == grades[i + 1])		//while statement counts number of repeats.
		{
			l = i;
			count = 0;
			while(grades[l] == grades[i])
			{
				count = count + 1;
				l++;
			}
			i = l-1;
		}
		
		cout << fixed << setw(3) << grades[i];//cout sets format of cout with setw() function.
		cout << " ";

		for (int m = 0; m < count; m++)		//puts asterisks according to count (repeats).
		{
			cout << "*";
		}

		cout << endl;
	}

	delete grades;
	
		return 0;
}