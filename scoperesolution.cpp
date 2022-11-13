#include<iostream>
using namespace std;
class student
{
private:
string name;
int m1,m2,m3,tot;
float avg;
public:
void getdata()
{
cout<<"\n Enter the name  :"<<endl;
cin>>name;
cout<<"\n Enter 3 marks  :"<<endl;
cin>>m1>>m2>>m3;
}
void display();
};
void student :: display()
{
tot=m1+m2+m3;
avg=tot/3.0;
cout<<"\n Name      :"<<name<<endl;
cout<<"\n M1        :"<<m1<<endl;
cout<<"\n M2        :"<<m2<<endl;
cout<<"\n M3        :"<<m3<<endl;
cout<<"\n TOTAL     :"<<tot<<endl;
cout<<"\n AVERAGE   :"<<avg<<endl;
}
int main()
{
student s;
s.getdata();
s.display();
return 0;
}
