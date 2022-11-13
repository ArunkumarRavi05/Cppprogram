#include<iostream>
using namespace std;
class math
{
private :
int a,b,c;
public:
math(int x,int y)
{
a=x;
b=y;
}
math(math &x)
{
a=x.a;
b=x.b;
}

void add()
{
c=a+b;
cout<<"\n Total :"<<c;
}
};
int main()
{
math m(10,15);
math m1(m);
m.add();
m1.add();
return 0;
}
