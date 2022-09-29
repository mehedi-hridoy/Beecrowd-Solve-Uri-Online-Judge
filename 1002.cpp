#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R,A,n=3.14159;
    cin>>R;

    A = n*(R*R);
    cout<<"A="<<setprecision(4)<<fixed<<A<<endl;
    return 0;
}
