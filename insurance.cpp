#include<iostream>
using namespace std;
int main()
{
int age;
char gender,m;
cout<<"\n Enter your marital status:";
cin>>m;
if(m=='m' || m=='M')
{
cout<<"\n You are eligible for insurance";
}
else if(m=='u' || m=='U')
{
cout<<"\n Enter your age:";
cin>>age;
cout<<"\n Enter your gender :";
cin>>gender;
if(((gender=='m' || gender=='M')&&age>30)) || ((gender=='f' || gender=='F')&&age>25)))
{
cout<<"\n You are eligible for insurance";
}
}
else
{
cout<<"\n Your are not eligible for insurance.";
}
return 0;
}








/*int age;
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
}*/
