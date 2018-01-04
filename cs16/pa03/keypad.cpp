#include <iostream>

using namespace std;

int main()
{

int user, t100, t10, t1;

cout<<"Enter desired temperature:"<<endl;
cin>>user;

if((user>=0)&&(user<=9))
{

if((user==1)||(user==4)||(user==7))
cout<<"Closest possible temperatures are "<<user-1<<" and "<<user+1<<"."<<endl;

else
cout<<"Closest possible temperature is "<<user<<"."<<endl;

}

else if((user >= 10)&&(user <= 99))
{
t10=user;
t1=user%10;
if(((user/10)==1)||((user/10)==4)||((user/10)==7))
{

cout<<"Closest possible temperatures are "<<((t10/10)-1)*10+9<<" and "<<((t10/10)+1)*10<<"."<<endl;
}
else
{

if((user%10==1)||(user%10==4)||(user%10==7))
{
cout<<"Closest possible temperatures are "<<t10-1<<" and "<<t10+1<<"."<<endl;
}
else
{
cout<<"Closest possible temperature is "<<user<<"."<<endl;
}
}

}

else if((user >=100)&&(user <= 999))
{
t100=user;
t10=user%100;
t1=t10%10;
if(((t100/100)==1)||((t100/100)==4)||((t100/100)==7))
{

cout<<"Closest possible temperatures are "<<((t100/100)-1)*100+99<<" and "<<((t100/100)+1)*100<<"."<<endl;
}
else if(((t10/10)==1)||((t10/10)==1)||((t10/10)==1))
{
cout<<"Closest possible temperatures are "<<(t100/100)*100+((t10/10)-1)*10+9<<" and "<<(t100/100)*100+((t10/10)+1)*10<<"."<<endl;
}

else if((t10%10==1)||(t10%10==4)||(t10%10==7))
{
cout<<"Closest possible temperatures are "<<(t100/100)*100+(t10/10)*10+ t1-1<<" and "<<t1+1<<"."<<endl;
}
else
{
cout<<"Closest possible temperature is "<<user<<"."<<endl;
}

}



	return 0;
}
