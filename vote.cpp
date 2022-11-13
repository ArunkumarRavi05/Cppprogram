#include<iostream>
using namespace std;
int main()
{
int age;
char gender;
cout<<"\n Enter your age:";
cin>>age;
if(age>=18)
{
cout<<"\n Enter your gender :";
cin>>gender;
if(gender=='m' || gender=='M')
{
cout<<"\n Goto Room-5";
}
else if(gender=='f' || gender=='F')
{
cout<<"\n Goto Room-6";
}
else
{
cout<<"\n Invalid entry";
}
}
else
{
cout<<"\n Your are not eligible to vote.";
}
return 0;
}
