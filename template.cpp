#include<iostream>
using namespace std;
template <class T>
void swapping(T &a,T &b)
{
T t=a;
a=b;
b=t;
}
int main()
{
char a='A',b='B';
int x=10,y=20;
cout<<"\n Before swap A : "<<a<<" | B : "<<b<<endl;
swapping(a,b);
cout<<"\n After swap A  : "<<a<<" | B : "<<b<<endl;
cout<<"\n Before swap X : "<<x<<" | Y : "<<y<<endl;
swapping(x,y);
cout<<"\n After swap X  : "<<x<<" | Y : "<<y<<endl;
return 0;
}
