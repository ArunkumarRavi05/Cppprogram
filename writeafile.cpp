#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream o("test.txt",ios::app);
o<<"Tutor Jose Computer Education,"<<endl;
o<<"Cherry Road"<<endl;
o<<"Salem"<<endl;
o.close();
return 0;
}
