#include<iostream>
using namespace std;
int main()
{
int i,n,c=0;

for(n=1;n<=100;n++)
{
for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
{
cout<<i<<endl;
}
c=0;
}
return 0;
}
