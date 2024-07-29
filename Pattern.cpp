#include<iostream>
using namespace std;

void Draw(int n)
{
    int k,ci;
    ci=n;
    for(int i=1;i<=ci;i++)
    {
        k=(i-1);
        while(k--)
        {
            cout<<" ";
        }
        for(int j=ci;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int m;
    cin>>m;
    Draw(m);
    return 0;
}
