#include<iostream>
using namespace std;
class A
{
protected:
int x;
};
class B : public A
{
public:
void getdetails()
{
cout<<"\n Enter the value of X:";
cin>>x;
}
void display()
{
cout<<"\n X : "<<x;
}
};
int main()
{
B o;
o.getdetails();
o.display();
return 0;
}
