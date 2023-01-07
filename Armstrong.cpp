#include <iostream>
using namespace std;
int main()
{
    int a,h,t,u,b;
    system("cls");
    cout<<"*caution*"<<endl;
    cout<<"This Code only works for a maximum of 3 digit numbers.\nEntering any other number will return incorrect results"<<endl;
    cout<<"Enter a Number"<<endl;
    cin>>a;
    h=a/100;
    b=a%100;
    t=b/10;
    u=b%10;
    if (a==((h*h*h)+(t*t*t)+(u*u*u)))
        cout<<"Number is an Armstrong Number"<<endl;
    else
        cout<<"Number is not an Armstrong Number"<<endl;
    return 0;
}
