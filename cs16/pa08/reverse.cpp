#include <iostream>
#include <array>
#include <iterator>
#include <string>

using namespace std;

void reverse(char array1[], int length)
{
	length = length - 1;
	int n(0);
	char temp(0);
	char* front = &array1[n];
	char* rear = &array1[length];
	while (front < rear)
	{
		temp = *front;
		*front = *rear;
		*rear = temp;
		n = n + 1;
		front=&array1[n];
		length = length - 1;
		rear=&array1[length];
	}
}

int main()
{
	int l, m, q;
	string input;

	cout << "Enter string:" << endl;

	getline(cin, input);

	l = input.length();

	char myString[100];

	for (int j = 0; j < 100; j++)
	{
		myString[j] = {'a'};
	}

	for (int i = 0; i < l; i++)
	{
		myString[i] = input[i];
	}

	reverse(myString, l);

	cout << "The string reversed is:" << endl;

	for (int p = 0; p < l; p++)
	{
		cout << myString[p];
	}
	cout << endl;

	cin >> m;
	cin >> q;

	return 0;
}