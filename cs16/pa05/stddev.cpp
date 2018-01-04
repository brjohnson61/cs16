#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;




int main()
{
	double count, average, next, sum, number, deviation;
	string filename;

	count = 0;
	sum = 0;
	number = 0;

	cout << "Enter filename:" << endl;
	cin >> filename;

	ifstream infile;
	ifstream in;

	infile.open(filename);
	in.open(filename);

	while (infile >> next) {
		count = count + 1;

		sum = sum + next;
	}

	if (sum != 0) {
		average = sum / count;
	}

	else {
		average = 0;
	}

	while (in >> next) {
		number = number + pow((next - average), 2.0);
	}

	number = number / (count - 1);
	deviation = sqrt(number);





	cout << "The standard deviation is " << fixed << setprecision(3) << deviation << endl;


	return 0;
}
