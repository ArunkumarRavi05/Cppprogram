#include<iostream>
using namespace std;
/*int main()
{
try
{
throw string("Joes");
}
catch(int e)
{
cout<<"Error code :"<<e<<endl;
}
catch(float e)
{
cout<<"Float :"<<e<<endl;
}
catch(char e)
{
cout<<"Char :"<<e<<endl;
}
catch(...)
{
cout<<"Error in program. "<<endl;
}
return 0;
}*/

/*int division(int x,int y)
{
if(y==0)
throw 1;
return x/y;
}
int main()
{
int a=10,b=5,c;
try
{
c=division(a,b);
cout<<"Result :"<<c<<endl;
}
catch(int e)
{
cout<<"Error number :"<<e<<"cant divide by zero"<<endl;
}
return 0;
}*/

int main()
{
int a=10,b=0,c;
try{
if(b==0)
throw 25;
c=a/b;
cout<<"Result :"<<c<<endl;
}
catch(int e)
{
cout<<"Error number :"<<e<<" cant divide by zero"<<endl;
}
return 0;
}
