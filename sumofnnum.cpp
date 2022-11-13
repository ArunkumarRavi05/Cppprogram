#include<iostream>
using namespace std;
int main()
{
int i,n,total=0;
cout<<"Enter the limit :"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
total=total+i;
}
cout<<"Sum of n numbers :"<<total<<endl;
return 0;
}
