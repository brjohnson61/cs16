#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
	int m(0), n(0), columns(0), rows(0), min, max, mountain[10][10], imin(0), jmin(0), imax(0), jmax(0);	
	string input;
	double distance, height, theta, idist,jdist;

	cout << "Enter heights:" << endl;

	do {
		getline(cin, input);
		istringstream stream(input);
		while (stream >> mountain[rows][n])
		{
			n = n + 1;
			columns = columns + 1;
		}

		n = 0;
		rows = rows + 1;
	} while (!input.empty());

	rows = rows - 1;
	columns = columns / rows;


	//cout << rows << " rows" << endl;
	//cout << columns << " columns" << endl;

	/*for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<columns; j++)
			cout << mountain[i][j] << " ";
		cout << endl;
	}*/

	min = mountain[0][0];
	max = mountain[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (min > mountain[i][j])
			{
				min = mountain[i][j];
				imin = i;
				jmin = j;
			}
			if (max < mountain[i][j])
			{
				max = mountain[i][j];
				imax = i;
				jmax = j;
			}
		}
	}


	jdist = jmax - jmin;
	idist = imax - imin;
	distance = sqrt(idist*idist + jdist*jdist);
	//distance = sqrt(pow((imax - imin), 2) + pow((jmax - jmin), 2));
	//cout << distance << " distance" << endl;
	height = mountain[imax][jmax] - mountain[imin][jmin];
	//cout << height << " height" << endl;
	theta = atan(height / distance);

	cout << "The angle of the climb is " << fixed << setprecision(3) << theta << " radians." << endl;




	return 0;
}