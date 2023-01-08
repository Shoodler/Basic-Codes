#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int f,f0,f1,l;
    f0=0;
    f1=1;
    cout<<f0<<endl;
    cout<<f1<<endl;
    for(l=2;l<10;l++)
    {
        f=f0+f1;
        cout<<f<<endl;
        f0=f1;
        f1=f;
    }
    return 0;
}
