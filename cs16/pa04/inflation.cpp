#include <iostream>
#include <iomanip>

using namespace std;

double inflationRate(double value1, double value2)
{
double inflation;

inflation=(((value2-value1)/value1)*100);

	return inflation;
}

int main()
{

double old, current, rate;

cout<< "Enter the item price one year ago (or zero to quit):"<<endl;
cin>>old;

while(old!=0){

cout<< "Enter the item price today:"<< endl;
cin>>current;

rate=inflationRate(old,current);

cout<<"The inflation rate is "<<fixed<<setprecision(2)<< rate <<" percent."<<endl;

cout<< "Enter the item price one year ago (or zero to quit):"<<endl;
cin>>old;


}

	return 0;
}
