#include <bits/stdc++.h>
using namespace std;

int hanoi (int);
int main(void)
{
    int n; cin>>n;
    cout<<hanoi (n);
}

int hanoi(int a)
{
    if(a==1)
        return (1);
    else
        return (2*hanoi(a-1) + 1);
}
