#include <iostream>
#include <iomanip>

using namespace std;

double annualMortgage(double cost,double down)
{

double mortgage=(0.09*(cost-down));

	return mortgage;
}

double taxSavings(double cost, double down)
{

double tax=0.35*0.06*(cost-down);

	return tax;
}

int main()
{
double price,downPayment,totalCost;

cout<<"Enter the home price (or zero to quit):"<<endl;
cin>>price;
while(price!=0){

cout<<"Enter the down payment:"<<endl;
cin>>downPayment;

totalCost=annualMortgage(price, downPayment)-taxSavings(price, downPayment);

cout<<"The after-tax cost is $"<<fixed<<setprecision(2)<<totalCost<<" annually."<<endl;

cout<<"Enter the home price (or zero to quit):"<<endl;
cin>>price;
}
	return 0;
}
