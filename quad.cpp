#include<iostream>
#include<math.h>

using namespace std;

class quad
{
int a,b,c,d;
public:
void getdata()
{
cout<<"Enter a , b , c ";
cin>>a>>b>>c;
}
void root()
{
d=(b*b)-(4*a*c);
if(d>0)
{
cout<<"Root 1 : "<<(-b+sqrt(d))/(2*a);
cout<<"\nRoot 2 : "<<(-b-sqrt(d))/(2*a)<<"\n";
}
else if(d==0)
{
cout<<"Equal roots :"<<-b/(2*a)<<"\n";
}
else
{
cout<<"Real part : "<<-b/(2*a);
cout<<"\nImaginary Part : "<<sqrt(-d)/(2*a)<<"\n";
}
}
};
int main()
{
quad t;
t.getdata();
t.root();
return 0;
}


