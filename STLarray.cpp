#include<iostream>
#include<array>
using namespace std;
int main()//array<object_type,size>array_name;
{
array<int,5>a={10,20,30,40,50};
array<int,5>b={100,200,300,400,500};
cout<<"Array size  :"<<a.size()<<endl;
for(int x:a)
{
cout<<" "<<x;
}
cout<<endl;
cout<<"Array element at 3rd index :"<<a.at(3)<<endl;
cout<<"Array empty or not :"<<a.empty()<<endl;
cout<<"Array first element  :"<<a.front()<<endl;
cout<<"Array last element  :"<<a.back()<<endl;
cout<<"Before swap   :"<<endl;
cout<<"A : ";
for(int x:a){cout<<" "<<x;}cout<<endl;
cout<<"B : ";
for(int x:b){cout<<" "<<x;}cout<<endl;

a.swap(b);
cout<<"After swap   :"<<endl;
cout<<"A : ";
for(int x:a){cout<<" "<<x;}cout<<endl;
cout<<"B : ";
for(int x:b){cout<<" "<<x;}cout<<endl;
array<int,5>c;
c.fill(10);
cout<<"C : ";
for(int x:c){cout<<" "<<x;}cout<<endl;
return 0;
}
