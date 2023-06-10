#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int i,a,n,t,z,b,l,x;
    cout<<"Enter Choice"<<endl;
    cout<<"Enter Number and Check Whether Prime\tEnter an Interval and Check Prime Numbers in that Interval\n\n1\t\t\t\t\t2"<<endl;
    cin>>i;
    switch(i)
    {
        case 1: cout<<"Enter a Number"<<endl;
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
                break;
        case 2: cout<<"Not Operational"<<endl;
                /*
                cout<<"Do not Enter Negative Numbers"<<endl;
                cout<<"Enter the Lower Number of the Interval"<<endl;
                cin>>a;
                cout<<"Enter the Higher Number of the Interval"<<endl;
                cin>>b;
                t=0;
                a++;
                do
                {
                    l=2;
                    do
                    {
                        x=a%l;
                        if(x==0)
                            t=1;
                        else
                            t=t;
                        l++;
                    }while(l<a);
                    if(t==0)
                        cout<<a<<endl;
                    a++;
                }while(a<b);
                break;
                */
        default:cout<<"Invalid Input"<<endl;
    }
    cout<<"Program Execution Complete"<<endl;
    return 0;
}
