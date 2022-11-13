#include<iostream>
using namespace std;
int main()
{
int a[5]={10,20};//10,20,0,0,0
int b[]={1,2,3,4,5};
for(auto x:a)
cout<<x<<endl;
for(auto x:b)
cout<<x<<endl;

return 0;
}
