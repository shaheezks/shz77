#include<iostream>
using namespace std;
class num
{
int n;
public :
void getdata()
{
cout<<"Enter num";
cin>>n;
}

void check()
{
if(n%2==0)
cout<<"The no. is even";
else
cout<<"The no. is odd";
}
};
int main()
{
num t;
t.getdata();
t.check();
return 0;
}


