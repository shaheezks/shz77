#include<iostream>
using namespace std;
class prime
{
int a,b,f,i,j;
public:
void getdata()
{
cout<<"Enter limits";
cin>>a>>b;
}
void check()
{
for(i=a;i<b;i++)
{
f=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
f=1;
break;
}}
if(f==0)
cout<<i<<"  ";
}
}
};
int main()
{
prime t;
t.getdata();
t.check();
return 0;
}



