#include<iostream>
using namespace std;
class Base
{
private:
int x;
public:
Base(int a):x(a)
{
cout<<"The value of Base X :"<<x<<endl;
}};
class Child : public Base
{
private:
int y;
public:
Child(int a,int b):Base(a),y(b)
{
cout<<"The value of Child Y :"<<y<<endl;
}};
int main()
{
Child o(25,50);
return 0;
}
