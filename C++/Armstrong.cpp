//WAP to check whether a number is armstrong or not using if else
#include<iostream>
using namespace std;
int main()
{    int a,b,c,d,e,f,cube;
    cout<<"Enter any 3 digit num:";
    cin>>a;
    b=a%10;
    e=a/10;
    c=e%10;
    f=e/10;
    d=f%10;
    cube=(b*b*b)+(c*c*c)+(d*d*d);
    if (cube==a)
    {cout<<"It is a Armstrong number";}
    else 
    {cout<<"It is not Armstrong";}
return 0;
}
