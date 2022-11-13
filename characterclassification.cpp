#include<iostream>
using namespace std;
int main()
{
/* character classification functions in C++
isalnum
isalpha
isdigit
isupper
islower
isspace*/
char a[6]="R@ 1a";
for(int i=0;i<=5;i++)
{
/*if(isalnum(a[i]))
cout<<a[i]<<endl;*/

/*if(isalpha(a[i]))
cout<<a[i]<<endl;*/

/*if(isdigit(a[i]))
cout<<a[i]<<endl;*/

/*if(isupper(a[i]))
cout<<a[i]<<endl;*/

/*if(islower(a[i]))
cout<<a[i]<<endl;*/

if(isspace(a[i]))
cout<<a[i]<<" space "<<endl;
}
return 0;
}
