#include<iostream>
#include<deque>
using namespace std;
int main()
{
deque<int>d={10};
d.push_back(25);
d.push_front(45);
for(int x:d){cout<<" "<<x<<endl;}
cout<<"Deque Size :"<<d.size()<<endl;
cout<<"Deque empty or not  :"<<d.empty()<<endl;
cout<<"Deque element at 2nd index  :"<<d.at(2)<<endl;
cout<<"Deque first element         :"<<d.front()<<endl;
cout<<"Deque last element          :"<<d.back()<<endl;
d.pop_back();
d.pop_front();
for(int x:d){cout<<" "<<x<<endl;}
return 0;
}
