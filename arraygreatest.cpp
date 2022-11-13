#include<iostream>
using namespace std;
int main()
{
int a[100],i,n,t;
cout<<"\n Enter the limit:";
cin>>n;
//fflush(stdin);
for(i=0;i<n;i++)
{
cout<<"\n Enter the number:";
cin>>a[i];
}
t=a[0];
for(i=1;i<n;i++)
{
if(t<a[i])
t=a[i];
}
cout<<"\n The greatest number :"<<t;
return 0;
}
