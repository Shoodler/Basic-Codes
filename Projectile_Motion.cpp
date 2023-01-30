#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
    double range,time,height,u,theeta;
    int i;
    const float g=9.8;
    const double pi=3.1415926536;
    cout<<"Select Your option"<<endl;
    cout<<"1-Calculate Time of Flight\n2-Calculate Range\n3-Calculate Maximum Height"<<endl;
    cin>>i;
    switch(i)
    {
        case 1: cout<<"Time of Flight of Projectile Selected"<<endl;
                cout<<"Enter Following Data in Metric Only"<<endl;
                cout<<"Enter Magnitude of Initial Velocity"<<endl;
                cin>>u;
                cout<<"Enter Angle of Inclination of Proectile with respect to Horizontal Axis(In Degrees)"<<endl;
                cin>>theeta;
                theeta=(theeta*pi)/180;
                time=(2*u*sin (theeta))/g;
                cout<<"Time of Flight="<<time<<"seconds"<<endl;
                cout<<"Program Execution Complete"<<endl;
                break;
        case 2: cout<<"Range of Projectile on Horizontal Axis Selected"<<endl;
                cout<<"Enter the Following Data in Metric Only"<<endl;
                cout<<"Enter Magnitude of Initial Velocity"<<endl;
                cin>>u;
                cout<<"Enter Angle of Inclination of Proectile with respect to Horizontal Axis(In Degrees)"<<endl;
                cin>>theeta;
                theeta=2*((theeta*pi)/180);
                range=((u*u)*sin (theeta))/g;
                cout<<"Range="<<range<<"meters"<<endl;
                cout<<"Program Execution Complete"<<endl;
                break;
        case 3: cout<<"Maximum Height of Projectile Selected"<<endl;
                cout<<"Enter Following Data in Metric Only"<<endl;
                cout<<"Enter Magniture of Initial Velocity"<<endl;
                cin>>u;
                cout<<"Enter Angle of Inclination of Proectile with respect to Horizontal Axis(In Degrees)"<<endl;
                cin>>theeta;
                height=((u*u)*(sin (theeta)*sin (theeta)))/2*g;
                cout<<"Height="<<height<<"meters"<<endl;
                cout<<"Prgram Execution Complete"<<endl;
                break;
        default:cout<<"Invalid Option Selected"<<endl;
    }
    return 0;
}
