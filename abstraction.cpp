#include<iostream>
using namespace std;
class BANK
{
public:
virtual void debit_credit()=0;
virtual void loan()=0;
};
class HDFC : public BANK
{
public:
void debit_credit()
{
cout<<" HDFC banking debit credit"<<endl;
}
void loan()
{
cout<<" HDFC banking loan @ 12%"<<endl;
}
};
class IB : public BANK
{
public:
void debit_credit()
{
cout<<" Indian bank debit credit"<<endl;
}
void loan()
{
cout<<" Indian bank loan @ 8%"<<endl;
}
};
int main()
{
BANK *b=new HDFC();
b->debit_credit();
b->loan();
return 0;
}
