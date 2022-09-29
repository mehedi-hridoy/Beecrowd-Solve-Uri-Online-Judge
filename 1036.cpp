#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double r1,r2,a,b,c,d;
    cin>>a>>b>>c;
    d = ((b*b) - (4*a*c));

    if(a==0.00 || d<0) {
        cout<<"Impossivel calcular"<<endl;
    } 
    else {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        cout<<fixed;
        cout<<setprecision(5)<<"R1 = "<<r1<<endl;
        cout<<setprecision(5)<<"R2 = "<<r2<<endl;


    }
    return 0;
}
