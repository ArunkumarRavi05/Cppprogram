#include<iostream>
using namespace std;//default argument function
void biodata(string name,int age,string city="salem")
{
cout<<name<<" is from "<<city<<" and age is "<<age<<endl;
}
int main()
{
biodata("Ram",25);
biodata("sam",22,"namakkal");
return 0;
}
