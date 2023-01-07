#include <iostream>
using namespace std;
int main()
{
    int a,n,t,z;
    system("cls");
    cout<<"Enter a Number"<<endl;
    cout<<"The Input Number can be negative or positive"<<endl;
    cin>>n;
    if(n<0)
        n=n*(-1);
    else
        n=n;
    t=0;
    for(a=2;a<n;a++)
    {
        z=n%a;
        if(z==0)
            t=1;
    }
    if(t==1)
        cout<<"Number is Composite"<<endl;
    else if (t==0)
        cout<<"Number is Prime"<<endl;
    return 0;
}
