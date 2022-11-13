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
cout<<"\n January"<<endl;
break;
case 2:
cout<<"\n February"<<endl;
break;
case 3:
cout<<"\n March"<<endl;
break;
case 4:
cout<<"\n April"<<endl;
break;
case 5:
cout<<"\n May"<<endl;
break;
case 6:
cout<<"\n June"<<endl;
break;
case 7:
cout<<"\n July"<<endl;
break;
case 8:
cout<<"\n August"<<endl;
break;
case 9:
cout<<"\n September"<<endl;
break;
case 10:
cout<<"\n October"<<endl;
break;
case 11:
cout<<"\n November"<<endl;
break;
case 12:
cout<<"\n December"<<endl;
break;
default:
cout<<"\n Invalid input"<<endl;
break;
}
return 0;
}
