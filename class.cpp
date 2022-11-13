#include<iostream>
using namespace std;
class circle
{
private:
float radius;
public:
float area()
{
cout<<"\n Enter the radius :"<<endl;
cin>>radius; //
return (3.14*(radius*radius));
}

float circumference()
{
return (2*3.14*radius);
}
};
int main()
{
circle c;
//c.area();
cout<<"\n Area of circle          :"<<c.area()<<endl;
cout<<"\n Circumference of circle :"<<c.circumference()<<endl;
return 0;
}



/*#include<iostream>
using namespace std;
class circle
{
   private:
       float radius;
   public:
     float area()
     {
         //A=πr2
         cout<<"\nEnter The Radius:";
         cin>>radius;
         return (3.14*(radius*radius));
     }
     float circumference()
     {
        //C=2πr
          return (2*3.14*radius);
     }
};

int main()
{
    circle o;
    cout<<"Area of Circle : "<<o.area()<<endl;
    cout<<"Circumference of Circle : "<<o.circumference();
     return 0;
}

*/
