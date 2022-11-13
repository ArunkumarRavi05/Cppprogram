#include<iostream>
using namespace std;
int main()
{
int a[100];
int i,n,x;
cout<<"\n Enter the limit:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\n Enter the number:";
cin>>a[i];
}
cout<<"\n Enter the value to search:";
cin>>x>>endl;
for(i=0;i<n;i++)
{
if(x==a[i])
{
cout<<"\n search value found at"<<a[i]<<endl;
return 0;
}
}
cout<<"\n search value is not found "endl;
return 0;
}
