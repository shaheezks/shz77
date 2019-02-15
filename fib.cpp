#include<iostream>
using namespace std;
class fib
{
int n;
public:
void getdata()
{
cout<<"Enter limit";
cin>>n;
}
void series()
{
int a=0,b=1,c,i;
cout<<a<<"  "<<b<<"  ";
for(i=0;i<n-2;i++)
{
c=a+b;
cout<<c<<"  ";
a=b;
b=c;
}}
};
int main()
{
fib t;
t.getdata();
cout<<"\nSeries : ";
t.series();
return 0;
}
