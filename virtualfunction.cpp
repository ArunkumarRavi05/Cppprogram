#include<iostream>
using namespace std;
class Base
{
public:
virtual void fun()
{
cout<<" Function of base class "<<endl;
}};
class Derived : public Base
{
public:
void fun()
{
cout<<" Function of derived class "<<endl;
}};
int main()
{
/*Derived o;
o.fun();*/
Derived d;
Base *p=&d;
//p=&b;
p->fun();
return 0;
}
