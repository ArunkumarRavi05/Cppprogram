#include<iostream>
using namespace std;
int main()
{
int h,t;
float c;
cout<<"Enter the Hardness,Tenstile and carbon content :"<<endl;
cin>>h>>t>>c;
if(h>50 && t>5600 && c<0.7)
{
cout<<"Grade : 10"<<endl;
}
else if(h>50 && t>5600)
{
cout<<"Grade : 9"<<endl;
}
else if(t>5600 && c<0.7)
{
cout<<"Grade : 8"<<endl;
}
else if(h>50 && c<0.7)
{
cout<<"Grade : 7"<<endl;
}
else if(h>50 || t>5600 || c<0.7)
{
cout<<"Grade : 6"<<endl;
}
else
{
cout<<"Grade : 5"<<endl;
}
return 0;
}
