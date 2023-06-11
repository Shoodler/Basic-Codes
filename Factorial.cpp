#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int f,a,l;
    cout<<"Enter a Number for factorial calculation"<<endl;
    cin>>a;
    f=1;
    l=1;
    while(l<=a)
    {
        f=f*l;
        l++;
    }
    cout<<"Answer = "<<f<<endl;
    cout<<"Program Execution Complete"<<endl;
    return 0;
}
