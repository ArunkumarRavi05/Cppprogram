#include<iostream>
using namespace std;
int sum(int a,int b)
{
return a+b;
}
int sum(int a,int b,int c)
{
return a+b+c;
}
float sum(float a,float b)
{
return a+b;
}

int main()
{
cout<<"\n Total   :"<<sum(25,10)<<endl;
cout<<"\n Total   :"<<sum(10,50,450)<<endl;
cout<<"\n Total   :"<<sum(10.5f,45.6f)<<endl;
return 0;
}
