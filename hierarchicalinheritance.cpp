#include<iostream>
using namespace std;
class shape
{
public:
float length,breadth,radius;
};
class rectangle :public shape
{
public:
void getRectangleDetails()
{
cout<<"\n Enter Length :"<<endl;
cin>>length;
cout<<"\n Enter Breadth :"<<endl;
cin>>breadth;
}
float rectangle_area()
{
return length*breadth;
}
};
class circle :public shape
{
public:
void getCircleDetails()
{
cout<<"\n Enter Radius :"<<endl;
cin>>radius;
}
double circle_area()
{
return 3.14*(radius*radius);
}
};
class square :public shape
{
public:
void getSquareDetails()
{
cout<<"\n Enter Length :"<<endl;
cin>>length;
}
float Square_area()
{
return length*length;
}
};
int main()
{
rectangle r;
circle c;
square s;
r.getRectangleDetails();
cout<<"\n Area of rectangle:"<<r.rectangle_area()<<endl;
c.getCircleDetails();
cout<<"\n Area of circle:"<<c.circle_area()<<endl;
s.getSquareDetails();
cout<<"\n Area of square:"<<s.Square_area()<<endl;
return 0;
}
