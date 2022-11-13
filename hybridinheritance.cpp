#include<iostream>
using namespace std;
class grandfather
{
public:
void house()
{
cout<<"\n Have own 3BHK house."<<endl;
}
};
class father:public grandfather
{
public:
void land()
{
cout<<"\n Have 5Acrs of land."<<endl;
}
};
class mother
{
public:
void gold()
{
cout<<"\n Have own 25g of gold."<<endl;
}
};

class son:public father,public mother
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
s.land();
s.gold();
s.car();
return 0;
}
