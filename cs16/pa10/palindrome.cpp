#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

bool recurser(string myString)
{
	bool a;
	string newstring="";

	if (myString[0] == myString[(myString.length() - 1)])
	{
		a = true;
		if (myString.length() > 2)
		{
			for (int i = 0; i < (myString.length() - 2); i++)
			{
				newstring = newstring + myString[i + 1];
			}
		}
		if ((newstring.length() != 1)&&(newstring!=""))
		{
			recurser(newstring);
		}
	}
	else
	{
		a = false;
	}
	return a;
}

void getinput()
{
	string input, upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", lower = "abcdefghijklmnopqrstuvwxyz";
	cout << "Enter string:" << endl;
	cin >> input;

	cout << "\"" << input << "\"" << " is";


	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (input[i] == upper[j])
			{
				input[i] = lower[j];
			}
		}
	}

	if (!recurser(input))
	{
		cout << " not";
	}

	cout << " a palindrome." << endl;

	return;
}

int main()
{
	getinput();
	
	return 0;
}