#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{

	string filename, next;
	int count=0;


	cout << "Enter filename:" << endl;
	cin >> filename;

	ifstream instream;
	instream.open(filename);


	while (instream >> next) {

		count = count + 1;

	}


	if (count != 1) {
		cout << "There are " << count;
		cout << " words in the file \"";
	}
	else {
		cout << "There is " << count;
		cout << " word in the file \"";
	}

	cout << filename << "\"." << endl;


	return 0;
}