#include<iostream>
using namespace std;
class A
{
public:
int x;
A()
{
cout<<"\n Constructing A."<<endl;
}
};
class B :virtual public A
{
public:
B()
{
cout<<"\n Constructing B."<<endl;
}
};
class C :virtual public A
{
public:
C()
{
cout<<"\n Constructing C."<<endl;
}
};
class D : public B, public C
{
public:
D()
{
cout<<"\n Constructing D."<<endl;
}
};
int main()
{
D o;
o.x=20;
return 0;
}
