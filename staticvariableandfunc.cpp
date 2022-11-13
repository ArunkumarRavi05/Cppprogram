#include<iostream>
using namespace std;
class student
{
private:
static int x;
string name;
int age;
public:
student(string n,int a)
{
x++;
name=n;
age=a;
}
void print()
{
cout<<" Name  :"<<name<<endl;
cout<<" Age   :"<<age<<endl;
}
static int getcount()
{
return x;
}
};
int student :: x=0;
int main()
{
student s1("Ram",25);
student s2("Sam",22);
student s3("Kumar",12);
s1.print();
s2.print();
s3.print();
return 0;
}
