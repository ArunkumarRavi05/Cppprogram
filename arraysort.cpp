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
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
cout<<"\n The sorted array :"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
return 0;
}
