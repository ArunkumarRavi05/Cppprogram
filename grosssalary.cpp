#include<iostream>
using namespace std;
int main()
{
float bs,hra,da,gs;
cout<<"\n Enter the your basic salary :";
cin>>bs;
if(bs<=1500)
{
hra=bs*0.10;
da=bs*0.90;
}
else
{
hra=500;
da=bs*0.98;
}
gs=bs+hra+da;
cout<<"\n  Basic salary :"<<bs<<endl;
cout<<"\n  HRA          :"<<hra<<endl;
cout<<"\n  DA           :"<<da<<endl;
cout<<"\n------------------------"<<endl;
cout<<"\n  Gross salary :"<<gs<<endl;
return 0;
}
