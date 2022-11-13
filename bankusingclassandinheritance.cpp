#include<iostream>
using namespace std;
class account
{
private:
string name;
int accno;
string atype;
public:
void getAccountDetails()
{
cout<<"\n Enter customer name  :";
cin>>name;
cout<<"\n Enter account number :";
cin>>accno;
cout<<"\n Enter account type   :";
cin>>atype;
}
void displayDetails()
{
cout<<"\n\n Customer Name :"<<name;
cout<<"\n Account Number  :"<<accno;
cout<<"\n Account Type    :"<<atype;
}
};
class current_account : public account
{
private:
float balance;
public:
void c_display()
{
cout<<"\n Balance :"<<balance;
}
void c_deposite()
{
float deposite;
cout<<"\n Enter amount to deposite :";
cin>>deposite;
balance=balance+deposite;
}
void c_withdraw()
{
float withdraw;
cout<<"\n Balance :"<<balance;
cout<<"\n Enter amount to withdraw :";
cin>>withdraw;
if(balance>1000)
{
balance=balance-withdraw;
cout<<"\n Balance amount after withdraw  :"<<balance;
}
else
{
cout<<"\n Insufficient balance.";
}
}
};

class saving_account : public account
{
private:
float sav_balance;
public:
void s_display()
{
cout<<"\n Balance :"<<sav_balance;
}
void s_deposite()
{
float deposite,interest;
cout<<"\n Enter amount to deposite :";
cin>>deposite;
sav_balance=sav_balance+deposite;
interest=(sav_balance*2)/100;
sav_balance=sav_balance+interest;
}
void s_withdraw()
{
float withdraw;
cout<<"\n Balance :"<<sav_balance;
cout<<"\n Enter amount to withdraw :";
cin>>withdraw;
if(sav_balance>500)
{
sav_balance=sav_balance-withdraw;
cout<<"\n Balance amount after withdraw  :"<<sav_balance;
}
else
{
cout<<"\n Insufficient balance.";
}
}
};
int main()
{
current_account c1;
saving_account s1;
char type;
cout<<"\n Enter S for saving account and Enter C for currnt account customer :";
cin>>type;
int choice;
if(type=='s' || type=='S')
{
s1.getAccountDetails();
while(1)
{
cout<<"\n choose your choice"<<endl;
cout<<"1)Deposite"<<endl;
cout<<"2)Withdraw"<<endl;
cout<<"3)Display balance"<<endl;
cout<<"4)Display with full details"<<endl;
cout<<"5)Exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
s1.s_deposite();
break;
case 2:
s1.s_withdraw();
break;
case 3:
s1.s_display();
break;
case 4:
s1.displayDetails();
s1.s_display();
break;
case 5:
goto end;
break;
default:
cout<<"\n\n Entered choice is invalid/Try again.";
}
}
}
else if(type=='c' || type=='C')
{
c1.getAccountDetails();
while(1)
{
cout<<"\n choose your choice"<<endl;
cout<<"1)Deposite"<<endl;
cout<<"2)Withdraw"<<endl;
cout<<"3)Display balance"<<endl;
cout<<"4)Display with full details"<<endl;
cout<<"5)Exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
c1.c_deposite();
break;
case 2:
c1.c_withdraw();
break;
case 3:
c1.c_display();
break;
case 4:
c1.displayDetails();
c1.c_display();
break;
case 5:
goto end;
break;
default:
cout<<"\n\n Entered choice is invalid/Try again.";
}
}
}
else
{
cout<<"\n Invalid account selection";
}
end:
cout<<"\n Thankyou for banking with us....";
return 0;
}
