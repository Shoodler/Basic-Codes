#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a,b,l,lcm,hcf;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        for(l=1;l<=b;l++)
          {

             if((a%l==0)&&(b%l==0))
             {
                 system("cls");
                 hcf=l;
                 cout<<"HCF="<<hcf<<endl;
             }
          }
    }
    if(a<b)
    {
        for(l=1;l<=a;l++)
          {

             if((a%l==0)&&(b%l==0))
             {
                 system("cls");
                 hcf=l;
                 cout<<"HCF="<<hcf<<endl;
             }
          }
    }
    a=a*b;
    lcm=a/hcf;
    cout<<"LCM="<<lcm<<endl;
    return 0;
}
