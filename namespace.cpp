/*#include<iostream>
//using namespace std;
int main()
{
int a;
/*cout<<"\n Enter the value of A:"<<endl;
cin>>a;
cout<<"\n Value of A:"<<a<<endl;

std::cout<<"\n Enter the value of A:";
std::cin>>a;
std::cout<<"\n Value of A:"<<a;

return 0;
}*/

/*#include<iostream>
//using namespace std;
using std::cout;
using std::cin;
int main()
{
int a;
/*cout<<"\n Enter the value of A:"<<endl;
cin>>a;
cout<<"\n Value of A:"<<a<<endl;

cout<<"\n Enter the value of A:";
cin>>a;
cout<<"\n Value of A:"<<a;

return 0;
}*/

/*#include<iostream>
//using namespace std;
int main()
{
string name="ram";
string name="ram";
return 0;
}*/

//solution
/*#include<iostream>
using namespace std;
namespace name1{
        string name="ram";
}
namespace name2{
        string name="ram";
}
int main()
{
cout<<name1::name<<endl;
cout<<name2::name;
return 0;
}*/

//to use name1 only

#include<iostream>
using namespace std;
namespace name1{
        string name="ram";
        int age=25;
}
namespace name2{
        string name="ram";
}
using namespace name1; //only name1 is executed when name is called.
int main()
{
cout<<name<<endl;
cout<<age;
return 0;
}

