#include <iostream>
using namespace std;
int main()
{
    char ch;
    system("cls");
    cout<<"Enter a Character"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z')
        cout<<"Uppercase"<<endl;
    else if(ch>='a' && ch<='z')
        cout<<"Lowercase"<<endl;
    else if(ch>='1' && ch<='9')
        cout<<"Digit"<<endl;
    else
        cout<<"Special Character"<<endl;
    return 0;
}
