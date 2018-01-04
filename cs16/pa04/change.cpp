#include <iostream>
#include <cmath>

using namespace std;

void compute_coins(int coin_value, int& number, int& amount_left)
{

number=floor(amount_left/coin_value);

amount_left=amount_left-(coin_value*number);

}

int main()
{

int cents, num1, num2, num3, money;

cout<<"Enter number of cents (or zero to quit):"<<endl;
cin>>cents;
while(cents!=0){
money=cents;


compute_coins(25, num1,cents);

compute_coins(10, num2, cents);

compute_coins(1, num3, cents);

if(money!=1){
cout<<money<<" cents can be given as";
}
else{
cout<<money<<" cent can be given as";
}

if((num1!=0)&&(num1!=1)){
cout<<" "<<num1<<" quarters";
}
else if(num1!=0){
cout<<" "<<num1<<" quarter";
}
if(((num1!=0)&&(num2!=0))||((num1!=0)&&(num3!=0))){
cout<<",";
}
if((num2!=0)&&(num2!=1)){
cout<<" "<<num2<<" dimes";
}
else if(num2!=0){
cout<<" "<<num2<<" dime";
}
if((num2!=0)&&(num3!=0)){
cout<<",";
}
if((num3!=0)&&(num3!=1)){
cout<<" "<<num3<<" pennies";
}
else if(num3!=0){
cout<<" "<<num3<<" penny";
}
cout<<"."<<endl;

cout<<"Enter number of cents (or zero to quit):"<<endl;
cin>>cents;

}
	return 0;
}
