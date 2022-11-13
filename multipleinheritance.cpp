#include<iostream>
using namespace std;
class father
{
public:
void fishing()
{
cout<<"\n Learn fishing."<<endl;
}
};
class mother
{
public:
void cooking()
{
cout<<"\n Learn cooking."<<endl;
}
};
class son:public father,public mother
{
public:
void coding()
{
cout<<"\n Learn coding."<<endl;
}
};
int main()
{
son s;
s.fishing();
s.cooking();
s.coding();
return 0;
}
