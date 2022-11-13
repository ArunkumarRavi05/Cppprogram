#include<iostream>
#include<queue>
using namespace std;
void print(queue<string>x){
while(!x.empty()){
cout<<" "<<x.front();
x.pop();
}
cout<<endl;
}
int main()
{
queue<string>q;
q.push("C");
q.push("C++");
q.push("Java");
q.push("C#");
print(q);
cout<<"Queue empty or not  :"<<q.empty()<<endl;
cout<<"Queue first element :"<<q.front()<<endl;
cout<<"Queue last element  :"<<q.back()<<endl;
q.pop();
cout<<"Queue first element :"<<q.front()<<endl;
return 0;
}
