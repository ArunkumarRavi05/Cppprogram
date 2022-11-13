#include<iostream>
using namespace std;
class student
{
private:
string name;
int age;
public:
/*student(string name,int age)
{
this->name=name;
this->age=age;
}*/
student(string name,int age):name(name),age(age){}
void print()
{
cout<<"Name :"<<name<<endl;
cout<<"Age  :"<<age<<endl;
}};
int main()
{
student o("Arun kumar",28);
o.print();
return 0;
}
