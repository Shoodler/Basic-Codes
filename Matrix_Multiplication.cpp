#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a[3][3],b[3][3],r,c;
    cout<<"Enter 1st Matrix"<<endl;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            cin>>a[r][c];
        }
        cout<<endl;
    }
    cout<<"You Entered"<<endl;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            cout<<a[r][c]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter 2nd Matrix"<<endl;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            cin>>b[r][c];
        }
        cout<<endl;
    }
    cout<<"You Entered"<<endl;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            cout<<b[r][c]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Multiplication of Matrices"<<endl;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            cout<<a[r][c]*b[r][c]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
