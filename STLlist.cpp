#include<iostream>
#include<list>
using namespace std;
void print(list<int>x){
for(int o:x){cout<<" "<<o;}
cout<<endl;
}
int main()
{
list<int>a={70,20,50,10};
print(a);
list<int>b;
b.push_back(350);
b.push_front(150);
b.push_front(250);
print(b);

cout<<"List Size :"<<a.size()<<endl;
cout<<"List A empty or not  :"<<a.empty()<<endl;
//cout<<"List A element at 2nd index  :"<<a.at(2)<<endl;
cout<<"List A first element         :"<<a.front()<<endl;
cout<<"List A last element          :"<<a.back()<<endl;
cout<<"Before Reverse :";
print(a);
cout<<"After Reverse  :";
print(a);
cout<<"Before Sort :";
print(a);
a.sort();
cout<<"After Sort  :";
print(a);
return 0;
}
