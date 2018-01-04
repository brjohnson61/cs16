#include <cstdio>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{

float i, term, sign, n, acc, pi;

do
{

cout<< "Enter the number of terms to approximate (or zero to quit):"<<endl;
cin>>i;
acc=0;

for(n=0; n<i; n++)
{

	sign = pow(-1.0,n); 
	term = (sign/(2.0*n+1.0));
	acc= acc + term;

}

pi=4*acc;

if(i>1)
	cout<< "The approximation is " << fixed << setprecision(2) << pi << " using " << setprecision(0) << i << " terms." <<endl;

else if(i==1)

cout<< "The approximation is " << fixed << setprecision(2) << pi << " using " << setprecision(0) << i << " term." <<endl;

}while(i!=0);


	return 0;
}
