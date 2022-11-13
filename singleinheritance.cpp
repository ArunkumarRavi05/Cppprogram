#include<iostream>
using namespace std;
class father
{
public:
void house()
{
cout<<"\n Have own 2BHK house."<<endl;
}
};
class son:public father
{
public:
void car()
{
cout<<"\n Have own Audi car."<<endl;
}
};
int main()
{
son s;
s.house();
s.car();
return 0;
}
