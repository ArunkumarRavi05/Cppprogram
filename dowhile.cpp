#include<iostream>
using namespace std;
int main()
{
int i=1;
int n;
cout<<"Enter the Limit :"<<endl;
cin>>n;
do
{
if(i%2==0)
{
cout<<i<<endl;
i++;
}
}while(i<=n);

return 0;
}
