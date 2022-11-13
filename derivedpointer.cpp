#include<iostream>
using namespace std;
class car
{
public:
void start()
{
cout<<" car start "<<endl;
}};
class BMW : public car
{
public:
void AdvanceGear()
{
cout<<" BMW advance gear "<<endl;
}};
int main()
{
/*BMW o;
o.start();
o.AdvanceGear();*/
BMW b;
car *p=NULL;
p=&b;
p->start();
return 0;
}
