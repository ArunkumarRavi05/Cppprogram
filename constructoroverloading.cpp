#include<iostream>
using namespace std;
class math
{
private :
int a,b,c;
public:
math()//default constructor
{
a=0;
b=0;
}
math(int x,int y)//parameterized constructor
{
a=x;
b=y;
}
math(math &x)//copy constructor
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
math m;
math m1(10,15);
math m2(m1);
m.add();
m1.add();
m2.add();
return 0;
}
