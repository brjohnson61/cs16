#include <iostream>

using namespace std;

int main()
{

int total, comp, human, a;

total=23;

do
{
if (total==1)
{
cout<<"There is 1 toothpick left. How many would you like to take?"<<endl;
cin>>human;
human=0;
total=0;
cout<<"You lose."<<endl;
}
else if (total!=0)

{
cout<<"There are "<<total<<" toothpicks left. How many would you like to take?"<<endl;
cin>>human;

}
while(human>3){

cout<<"You must pick between 1 and 3 toothpicks. How many would you like to take?"<<endl;
cin>>human;
}

total=total-human;

comp=0;

if (total>4)

{
comp=4-human;
total=total-comp;
cout<<"The computer takes "<<comp<<"."<<endl;
}

else if ((total<=4)&&(total>=2))

{
comp=total-1;
total=total-comp;
cout<<"The computer takes "<<comp<<"."<<endl;
}

else if (total==1)

{
comp=1;
total=1-comp;
cout<<"The computer takes "<<comp<<"."<<endl;
cout<<"The computer loses."<<endl;


}

}while(total!=0);


	return 0;

}

