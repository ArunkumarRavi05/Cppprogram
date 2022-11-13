#include<iostream>
using namespace std;
int main()
{
int m;
cout<<"\n Enter the month(1-12)";
cin>>m;
switch(m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
cout<<"\n 31 days in this month."<<endl;
break;
case 2:
cout<<"\n 28|29 days in this month."<<endl;
break;

case 4:
case 6:
case 9:
case 11:
cout<<"\n 30 days in this month."<<endl;
break;
default:
cout<<"\n Invalid input"<<endl;
break;
}
return 0;
}
