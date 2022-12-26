#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int t,l,c,n;
    system("cls");
    cout<<"Enter a Number"<<endl;
    cin>>n;
    c=1;
    l=1;
    t=n;
    while(l<=n)
    {
        c=c*t;
        t--;
        l++;
    }
    cout<<"Factorial ="<<c<<endl;
    getch();
    return 0;
}
