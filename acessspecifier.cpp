#include<iostream>
using namespace std;
class student
{
private:
string name;
int age;
public:
void getdata()
{
cout<<"\n Enter name and age :"<<endl;
cin>>name;
cin>>age;
}
void display()
{
cout<<"\n Name :"<<name<<endl;
cout<<"\n Age  :"<<age<<endl;
}
};
int main()
{
student s;
s.getdata();
s.display();
return 0;
}
