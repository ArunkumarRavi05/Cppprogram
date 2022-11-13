#include<iostream>
using namespace std;
enum gender {Male,Female};
int main()
{
gender g=Male;
switch(g)
{
case Male:
cout<<"\n Gender male.";
break;
case Female:
cout<<"\n Gender female.";
break;
default:
cout<<"\n Invalid input.";
break;
}
return 0;
}
