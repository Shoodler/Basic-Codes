#include <iostream>
using namespace std;
int main()
{
    int h,t,u,a,b,x;
    system("cls");
    cout<<"*Caution*"<<endl;
    cout<<"This Code Only works for a Maximum of 3 digit numbers.\nIf other numbers are entered computer will return incorrect results"<<endl;
    cout<<"Enter a Number"<<endl;
    cin>>a;
    h=a/100;
    b=a%100;
    t=b/10;
    u=b%10;
    x=((u*100)+(t*10)+u);
    if (x!=a)
        cout<<"Number is not a Palindrome"<<endl;
    else
        cout<<"Number is a Palindrome"<<endl;
    return 0;
}
