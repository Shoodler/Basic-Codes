#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,z,x1,x2;
    system("cls");
    cout<<"Let the given inequality be a function of 'x'"<<endl;
    cout<<"Enter the Leading Coefficient"<<endl;
    cin>>a;
    cout<<"Enter the Linear Term"<<endl;
    cin>>b;
    cout<<"Enter the Constant Term"<<endl;
    cin>>c;
    x1=((-1)*b+sqrt((b*b)-4*a*c))/2*a;
    x2=((-1)*b-sqrt((b*b)-4*a*c))/2*a;
    cout<<"Enter Choice\n\n";
    cout<<"(Greater than 0)           1"<<endl;
    cout<<"(Less than 0)              2"<<endl;
    cout<<"(Greater than/equal to 0)  3"<<endl;
    cout<<"(Less than/equal to 0)     4"<<endl;
    cin>>z;
    switch(z)
    {
        case 1: cout<<"Greater than 0"<<endl;
                cout<<"x>"<<x1<<" & "<<"x<"<<x2<<endl;
                break;
        case 2: cout<<"Less than 0"<<endl;
                cout<<x2<<"<x<"<<x1;
                break;
        case 3: cout<<"greater than/equal to 0"<<endl;
                cout<<"x>="<<x1<<" & "<<"x<="<<x2<<endl;
                break;
        case 4: cout<<"Less than/equal to 0"<<endl;
                cout<<x2<<"<=x<="<<x1<<endl;
                break;
        default: cout<<"Invalid Input"<<endl;

    }
    return 0;
}
