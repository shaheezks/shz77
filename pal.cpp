#include<iostream>
using namespace std;
class pal
{
int n,s=0,a,x;
public:
void getdata()
{
cout<<"Enter num";
cin>>n;
}
void check()
{
x=n;
while(n!=0)
{
a=n%10;
s=(s*10)+a;
n=n/10;
}
if(s==x)
cout<<"The no. is palindrome";
else
cout<<"The no. is not palindrome";
}
};
int main()
{
pal t;
t.getdata();
t.check();
return 0;
}
