#include<iostream>
using namespace std;
class B;
class A
{
private:
int x=10;
friend B;
};
class B
{
public:
A o;
void display()
{
cout<<" X : "<<o.x<<endl;
//cout<<" Y : "<<o.y<<endl;
}};
int main()
{
B b;
b.display();
return 0;
}
