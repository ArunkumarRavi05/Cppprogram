#include<iostream>
using namespace std;
class Vaccine
{
public:
virtual void putVaccine()
{
cout<<" Covid vaccine "<<endl;
}};
class covaxin : public Vaccine
{
public:
void putVaccine()
{
cout<<" Put covaxin vaccine "<<endl;
}};
class covishield : public Vaccine
{
public:
void putVaccine()
{
cout<<" Put covishield vaccine "<<endl;
}};
int main()
{
covaxin cx;
covishield cs;
Vaccine *o=NULL;
o=&cx;
o->putVaccine();
o=&cs;
o->putVaccine();
return 0;
}
