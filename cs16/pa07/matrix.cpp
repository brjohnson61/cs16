#include <iostream>
#include <math.h>
#include <string>
#include<sstream>

using namespace std;


int main()
{
	int matrix1[10][10], matrix2[10][10], result[10][10];
	string input, input1,value="";
	int m = 0, n = 0, r=0, c=0, columns=0,count=0, newValue=0, columns2=0;

	cout << "Enter first matrix:" << endl;

	do {
		getline(cin, input);
		istringstream stream(input);
		while(stream>>matrix1[m][n])
		{
			n = n + 1;
			columns = columns + 1;
		}
		
		n = 0;
		m = m + 1;
	} while (!input.empty());

	m = m - 1;
	columns = columns/m;
	
	//cout << "columns = " << columns << endl;
	//cout << "rows = " << m << endl;

	cout << "Enter second matrix:" << endl;

	do {
		getline(cin, input1);
		istringstream stream1(input1);
		while (stream1 >> matrix2[r][c])
		{
			c = c + 1;
			columns2 = columns2 + 1;
		}
		c = 0;
		r = r + 1;
	} while (!input1.empty());

	r = r - 1;
	columns2 = columns2 / r;

	

	if (columns != r)
	{
		cout << "The two matrices have incompatible dimensions." << endl;
	}
	else
	{
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < columns2; ++j)
			{
				result[i][j] = 0;
				for (int k = 0; k < columns; ++k)
				{
					result[i][j] += matrix1[i][k] * matrix2[k][j];
				}
			}
		}

		cout << "The product is:" << endl;

		for (int p = 0; p < m; ++p)
		{
			for (int q = 0; q < columns2; ++q)
			{
				cout << result[p][q];
				
				if (q == columns2 - 1)
				{
					cout << endl;
				}
				else
				{
					cout << ' ';
				}
			}
		}
	}


	return 0;
}