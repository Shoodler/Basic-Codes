#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int a;
    float f,c;
    cout<<"Fahrenheit to Celcius \t Celcius to Fahrenheit\n 1\t\t\t2"<<endl;
    cin>>a;
    switch(a)
    {
        case 1: cout<<"Enter Fahrenheit Value"<<endl;
                cin>>f;
                c=((5/9.0)*(f-32));
                cout<<"The temperature in Celcius = "<<c<<endl;
                break;
        case 2: cout<<"Enter Celcius value"<<endl;
                cin>>c;
                f=((9/5.0)*(c+32));
                cout<<"The temperature in Fahrenheit = "<<f<<endl;
                break;
        default: cout<<"Invalid Input"<<endl;
    }
    cout<<"Program Execution Complete"<<endl;
}
