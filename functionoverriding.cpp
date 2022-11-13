#include<iostream>
using namespace std;
class base
{
protected:
int a,b;
public:
void add()
{
cout<<"\n Enter 2 numbers:"<<endl;
cin>>a>>b;
cout<<"\n Total :"<<a+b<<endl;
}
};
class derived : public base
{
private:
int c;
public:
void add()
{
cout<<"\n Enter 3 numbers:"<<endl;
cin>>a>>b>>c;
cout<<"\n Total :"<<a+b+c<<endl;
}
};
int main()
{
base b;
b.add();
derived d;
d.add();
return 0;
}
