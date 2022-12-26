#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double i,a,d,n,tn,r,b,c,sn,g,y,z;
    system("cls");
    cout<<"Select Option"<<endl;
    cout<<"AP(t'th term)\t GP(t'th term)\t  AP(Sum of terms)\t GP(Sum of terms)\n 1\t\t 2\t\t  3\t\t\t 4"<<endl;
    cin>>i;
    if ((i>4)||(i<1))
        cout<<"Invalid Input";
    else if (i==1)
    {
        cout<<"Selected AP"<<endl;
        cout<<"Enter 1st Term"<<endl;
        cin>>a;
        cout<<"Enter common difference"<<endl;
        cin>>d;
        cout<<"Enter the no. of term in sequence of which the term's value is to be calculated"<<endl;
        cin>>n;
        tn=a+((n-1)*d);
        cout<<"The Term ="<<tn<<endl;
        getch();
        return 0;

    }
    else if (i==2)
    {


        cout<<"Selected GP"<<endl;
        cout<<"Enter 1st Term"<<endl;
        cin>>a;
        cout<<"Enter Common Ratio"<<endl;
        cin>>r;
        cout<<"Enter the no. of term in sequence of which the term's value is to be calculated"<<endl;
        cin>>n;
        n=n-1;
        //a^n
        //a(base),n(index),c(counter),b(loop variable)
        c=1;
        for (b=1;b<=n;b=b+1)
        {
            c=c*a;
        }
        tn=c*a;
        cout<<"The Term ="<<tn<<endl;
    getch();
    return 0;
    }
    else if (i==3)
    {
        cout<<"AP(sum of terms) selected"<<endl;
        cout<<"Enter first term of sequence"<<endl;
        cin>>a;
        cout<<"Enter common difference of sequence"<<endl;
        cin>>d;
        cout<<"Enter the no of terms of which the sum is to be calculated"<<endl;
        cin>>n;
        sn=(n/2)*((2*a)+((n-1)*d));
        cout<<"Sum = "<<sn<<endl;

        getch();
        return 0;
    }
    else if (i==4)
    {
        cout<<"GP(sum of terms selected)"<<endl;
        cout<<"Enter first term of sequence"<<endl;
        cin>>a;
        cout<<"Enter common ratio"<<endl;
        cin>>r;
        cout<<"Enter the no of terms of which the sum is to be calculated"<<endl;
        cin>>n;
        y=1;
        for (z=1;z<=n;z=z+1)
            y=y*r;
        g=y;

        if (r>1)
        {
            sn=a*((g-1)/(r-1));
            cout<<"Sum ="<<sn;
        }

        else if (r<1)
        {
            sn=a*((1-g)/(1-r));
            cout<<"Sum ="<<sn;
        }

        getch();
        return 0;
    }
}

