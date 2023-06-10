#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a,b,hcf,lcm,l,i;
    cout<<"Disclaimer!"<<endl;
    cout<<"If the Computer Displays 'nan','inf',or negative numbers that means the values were to big or complex to calculate."<<endl;
    cout<<"In such event you will not be able to calulate the Numbers."<<endl;
    cout<<endl;
    cout<<"Press 1 to Start"<<endl;
    cout<<"Press 2 to Cancel"<<endl;
    cin>>i;
    switch(i)
    {
        case 1:{
    cout<<"Enter 2 Numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        for(l=1;l<=b;l++)
        {
            if(a%l==0&&b%l==0)
            {
                system("cls");
                hcf=l;
            }
        }
    }
    else
        {
        for(l=1;l<=a;l++)
        {
            if(a%l==0&&b%l==0)
            {
                system("cls");
                hcf=l;
            }
        }
    }
    cout<<"The 1st Number="<<a<<endl;
    cout<<"The 2nd Number="<<b<<endl;
    cout<<"HCF="<<hcf<<endl;
    lcm=a*b/hcf;
    cout<<"LCM="<<lcm<<endl;
        }
        break;
        case 2:cout<<"Program Cancelled"<<endl;
        break;
        default:cout<<"Invalid Input, Program terminated"<<endl;
    }
    cout<<"Program Execution Complete"<<endl;

    return 0;
}
