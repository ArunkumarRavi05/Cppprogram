#include<iostream>
using namespace std;
int main()
{
int a[100],i,n,sum=0;

cout<<"\n Enter the limit:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\n Enter the number:";
cin>>a[i];
sum+=a[i];
}
cout<<"\n sum :"<<sum;
return 0;
}
