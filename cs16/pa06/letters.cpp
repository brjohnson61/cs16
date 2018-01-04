#include <iostream>
#include <string>

using namespace std;
int values[26] = {};
string lower = "abcdefghijklmnopqrstuvwxyz";
string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lowercase[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void sorter(string statement)
{
	int index;
	for (int i = 0; i < statement.length(); ++i)
	{
		index=lower.find(statement[i]);
		values[index] = values[index] + 1;
	}
	for (int k = 0; k < statement.length(); ++k)
	{
		index = upper.find(statement[k]);
		values[index] = values[index] + 1;
	}
	return;
}

int main()
{
	string text;
	int temp,tempchar,x;
	cout << "Enter text:" << endl;
	cin >> text;
	
	sorter(text);
	for (int p = 0; p < 25; ++p)
	{
		for (int i = 0; i < 25; ++i)
		{
			if (values[i] < values[i + 1])
			{
				temp = values[i];
				values[i] = values[i + 1];
				values[i + 1] = temp;
				tempchar = lowercase[i];
				lowercase[i] = lowercase[i + 1];
				lowercase[i + 1] = tempchar;
			}

		}
	}
	cout << "Frequencies:" << endl;
	int i = 0;
	while(i<26)
	{
		if (values[i] != 0) 
		{
			cout << lowercase[i] << " " << values[i] << endl;
		
		}
		i = i + 1;
	}
	

/*void sorter(string text)
{

	for (int i = 0; i < text.length(); i++)
	{
		for (int n = 0; n < 26; n++)
		{
			if (text[i] == array2[n])
			{
				array1[n] = array1[n] + 1;
			}
			else if (text[i] == array3[n])
			{
				array1[n] = array1[n] + 1;
			}
		}
	}

}
int main()
{
	
	int temp=0, temp1='a',x;
	string text1;

	cout << "Enter text:" << endl;
	cin >> text1;
	cout << "Frequencies:" << endl;

	sorter(text1);
	int i = 0;
	while (array1[i]) {
		cout << array1[i] << endl;
		i = i + 1;
	}

	/*for (int i = 0; i < 25; i++)
	{
		
			if(array1[i]<array1[i+1])
			temp = array1[i];
			temp1 = array2[i];
			array1[i] = array1[i+1];
			array2[i] = array2[i+1];
			array1[i+1] = temp;
			array2[i+1] = temp1;
		
	}


	for (int p = 0; p < 25; p++)
	{
		if (array1[p] != 0)
		{
			cout << array1[p] << " " << array2[p] << endl;
		}
	}*/
	
	cin >> x;
	return 0;
}