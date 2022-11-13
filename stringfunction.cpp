#include<iostream>
using namespace std;
int main()
{
/*string a="welcome to arun kumar";
//cout<<"\n Enter the para :";
//getline(cin,a);
cout<<"\n String  is "<<a;*/


/*string a("welcome to arun kumar");
cout<<"\n String  is "<<a;*/



                        //string concatenation
/*string firstname="Arun";
string lastname="Kumar";
cout<<firstname+" "+lastname<<endl;
string fullname=firstname.append(lastname);
cout<<fullname<<endl;

                    //string access

string name="Arun";
cout<<name<<endl;
cout<<name[0]<<endl;
name[0]='R';
cout<<name<<endl;*/


                        //string input functions

/*string str;
//cout<<"\n Enter the string :";
//cin>>str;
//getline(cin,a);
//cout<<"\n String  is "<<str;
fflush(stdin);
cout<<"\n Enter the string :";
getline(cin,str);
cout<<"\n String  is "<<str;

str.push_back('r');
cout<<"\n String  is "<<str<<endl;
str.pop_back();
cout<<"\n String  is "<<str<<endl;*/


                            //capacity function in string

/*string str("Arun Kumar");
cout<<str;
cout<<"\n Size          :"<<str.size()<<endl;
cout<<"\n Length        :"<<str.length()<<endl;
cout<<"\n Max size      :"<<str.max_size()<<endl;*/


                        // iterator function in string

/*string str="Arun Kumar";
string::iterator it;
for(it=str.begin();it!=str.end();it++)
{
cout<<*it<<endl;
}
cout<<"----------------------"<<endl;
string::reverse_iterator it2;
for(it2=str.rbegin();it2!=str.rend();it2++)
{
cout<<*it2<<endl;
}*/


                            //manipulation function in string
string x="Arun";
string y="Kumar";
cout<<"\n Before swap X:"<<x<<"  Y:"<<y<<endl;
x.swap(y);
cout<<"\n After swap  X:"<<x<<"  Y:"<<y<<endl;
return 0;
}
