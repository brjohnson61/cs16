#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/*
void corrector(ifstream& instream, ofstream& outstream)
{
	string next;

	while (instream >> next) {


		if (next == "cin") {
			next = "cin >> ";
			outstream << next;
		}

		else if (next == "cout") {
			next = "cout << ";
			outstream << next;
		}

		else if ((next == "<<") || (next == ">>")) {
		}

		else {
			outstream << next;
		}
	}
	return;
}
*/

void corrector(ifstream& instream, ofstream& outstream)
{
	char next;

	instream.get(next);

	while (!instream.eof())
	{
		if (next == 'c')
		{
			instream.get(next);
			if (next == 'i')
			{
				instream.get(next);
				if (next == 'n')
				{
					instream >> next;
					if (next == '<')
					{
						instream >> next;
						if (next == '<')
						{
							outstream << "cin >>";
							instream.get(next);
						}
						else
						{
							outstream << "cin >" << next;
							instream.get(next);
						}
					}
					else
					{
						outstream << "cin " << next;
						instream.get(next);
					}
				}
				else
				{
					outstream << "ci" << next;
					instream.get(next);
				}
			}
			else if (next == 'o')
			{
				instream.get(next);
				if (next == 'u')
				{
					instream.get(next);
					if (next == 't')
					{
						instream >> next;
						if (next == '>')
						{
							instream.get(next);
							if (next == '>')
							{
								outstream << "cout <<";
								instream.get(next);
							}
							else
							{
								outstream << "cout >" << next;
							}
						}
						else
						{
							outstream << "cout " << next;
							instream.get(next);
						}
					}
					else
					{
						outstream << "cou" << next;
						instream.get(next);
					}
				}
				else
				{
					outstream << "co" << next;
					instream.get(next);
				}
			}
			else
			{
				outstream << "c" << next;
				instream.get(next);
			}
		}
		else
		{
			outstream << next;
			instream.get(next);
		}
	}
}

int main()
{
	string filename, corrected;

	corrected = "corrected.txt";

	cout << "Enter filename:";
	cin >> filename;

	ifstream in(filename, ifstream::in);
	ofstream out(corrected, ofstream::out);

	//in.open(filename);
	//out.open(corrected);

	corrector(in, out);

	out.close();

	cout << endl;
	ifstream newin(corrected, ifstream::in);

	cout << newin.rdbuf();


	return 0;
}
