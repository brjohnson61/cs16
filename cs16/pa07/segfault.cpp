#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Create integer variable
	int x = 1;
	// Create pointer to reference x
	int *y = &x;
	// Set x to 0
	*y = 0;
	// Print the value of x (0)
	cout << *y << endl;

	// Create vector to store two elements
	vector<int> vector(2);
	// Store 1 and 6
	vector[0] = 1;
	vector[1] = 6;
	// Print the number 16
	cout << vector[0] << vector[1] << endl;

	return 0;
}
