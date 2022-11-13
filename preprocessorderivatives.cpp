#include<iostream>
#define PI 3.14
#define rectangle(length,breadth)(length*breadth)
#define createString(s) #s
#define concat(a,b) a ## b
using namespace std;
int main()
{
cout<<"Area of circle :"<<PI*5*5<<endl;
int length=10,breadth=5,area;
area=rectangle(length,breadth);
cout<<"Area of rectangle :"<<area<<endl;
cout<<"New string :"<<createString(Tutor Joes)<<endl;
int ab=100;
cout<<"The value of AB :"<<concat(a,b)<<endl;
cout<<" LINE         :"<<__LINE__<<endl;
cout<<" FILE         :"<<__FILE__<<endl;
cout<<" DATE         :"<<__DATE__<<endl;
cout<<" TIME         :"<<__TIME__<<endl;
//cout<<" Cplusplus    :"<<___cplusplus<endl;
return 0;
}
