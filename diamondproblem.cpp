#include<iostream>
using namespace std;
class A
{
public:
void display()
{
cout<<"\n Display method A."<<endl;
}
};
class B :virtual public A
{
public:
void show()
{
cout<<"\n Show method B."<<endl;
}
};
class C :virtual public A
{};
class D : public B, public C
{};
int main()
{
D o;
o.display();
return 0;
}
