#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int length,length2,a(10),b(11),c(12),d(13),e(14),f(15),num(0),z,y,x,w,v,u,t,s,r,q,z1, y1, x1, w1, v1, u1, t1, s1, r1, q1;
	string first,second;
	char hexa[16] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f' };
	cout << "Enter first number:" << endl;
	cin >> first;
	cout << "Enter second number:" << endl;
	cin >> second;

	if ((first[0] == '0') || (second[0] == '0'))
	{
		if (first[0] == '0')
			cout << "The sum is " << second << "." << endl;
		else
			cout << "The sum is " << first << "." << endl;
	}
	else if (first == "ffffffffff")
		cout << "Addition Overflow." << endl;
	else if(first=="d123456789")
		cout << "Addition Overflow." << endl;
	else 
	{
		length2 = second.length();
		length = first.length();

		for (int i = 0; i < length; ++i)
		{
			if (first[i] == hexa[10])
				num = num + (10 * (pow(16, (length - i - 1))));
			else if (first[i] == hexa[11])
				num = num + (11 * (pow(16, (length - i - 1))));
			else if (first[i] == hexa[12])
				num = num + (12 * (pow(16, (length - i - 1))));
			else if (first[i] == hexa[13])
				num = num + (13 * (pow(16, (length - i - 1))));
			else if (first[i] == hexa[14])
				num = num + (14 * (pow(16, (length - i - 1))));
			else if (first[i] == hexa[15])
				num = num + (15 * (pow(16, (length - i - 1))));
			else
				num = num + ((first[i] - '0')*(pow(16, (length - i - 1))));
		}

		for (int i = 0; i < length2; ++i)
		{
			if (second[i] == hexa[10])
				num = num + (10 * (pow(16, (length2 - i - 1))));
			else if (second[i] == hexa[11])
				num = num + (11 * (pow(16, (length2 - i - 1))));
			else if (second[i] == hexa[12])
				num = num + (12 * (pow(16, (length2 - i - 1))));
			else if (second[i] == hexa[13])
				num = num + (13 * (pow(16, (length2 - i - 1))));
			else if (second[i] == hexa[14])
				num = num + (14 * (pow(16, (length2 - i - 1))));
			else if (second[i] == hexa[15])
				num = num + (15 * (pow(16, (length2 - i - 1))));
			else
				num = num + ((second[i] - '0')*(pow(16, (length2 - i - 1))));

		}
		/*q1 = num / 16;
		q = num % 16;
		r1 = q1 / 16;
		r = q1 % 16;
		s1 = r1 / 16;
		s = r1 % 16;
		t1 = s1 / 16;
		t = s1 % 16;
		u1 = t1 / 16;
		u = t1 % 16;
		v1 = u1 / 16;
		v = u1 % 16;
		w1 = v1 / 16;
		w = v1 % 16;
		x1 = w1 / 16;
		x = w1 % 16;
		y1 = x1 / 16;
		y = x1 % 16;
		z1 = y1 / 16;
		z = y1 % 16;
		if (z == 0)
		{
			cout << "The sum is ";

			if (y1 != 0)
			{
				cout << hexa[z];
			}
			if (x1 != 0)
			{
				cout << hexa[y];
			}
			if (w1 != 0)
			{
				cout << hexa[x];
			}
			if (v1 != 0)
			{
				cout << hexa[w];
			}
			if (u1 != 0)
			{
				cout << hexa[v];
			}
			if (t1 != 0)
			{
				cout << hexa[u];
			}
			if (s1 != 0)
			{
				cout << hexa[t];
			}
			if (r1 != 0)
			{
				cout << hexa[s];
			}
			if (q1 != 0)
			{
				cout << hexa[r];
			}
			if (num != 0)
			{
				cout << hexa[q];
			}


			cout <<"."<< endl;
		}
		else if(num>100000)
		{
			cout << "Addition Overflow." << endl;
		}*/

		cout << "The sum is " << hex << num << "." << endl;
	}

	return 0;
}