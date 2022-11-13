#include<iostream>
using namespace std;
class bike
{
public:
/*virtual void start()
{
cout<<" bike start "<<endl;
}*/

virtual void start()=0;
};
class Apache : public bike
{
public:
void start()
{
cout<<" Apache start "<<endl;
}};
int main()
{

bike *p=new Apache();
p->start();
return 0;
}
