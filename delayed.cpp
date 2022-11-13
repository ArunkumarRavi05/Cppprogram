#include<iostream>
using namespace std;
int main()
{
float days;
cout<<"Enter the delayed days :"<<endl;
cin>>days;
if(days>0 && days<6)
{
cout<<"\n Fine Amount per day is 0.50paise."<<endl;
cout<<"\n Fine Amount :"<<days*0.5<<endl;
}
else if(days>5 && days<11)
{
cout<<"\n Fine Amount per day is Rs.1"<<endl;
cout<<"\n Fine Amount :"<<days*1.0<<endl;
}
else if(days>10 && days<30)
{
cout<<"\n Fine Amount per day is Rs.5"<<endl;
cout<<"\n Fine Amount :"<<days*5.0<<endl;
}
else
{
cout<<"\n Membership cancelled."<<endl;
}
return 0;
}
