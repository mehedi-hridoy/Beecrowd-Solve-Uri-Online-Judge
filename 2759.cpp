#include<iostream>
using namespace std;
int main()
{
    char a,b,c,temp;
    cin>>a>>b>>c;

    cout<<"A = "<<a<<", "<<"B = "<<b<<", "<<"C = "<<c<<endl;


    temp = a;
    a = b;
    b = c;
    c = temp;

    cout<<"A = "<<a<<", "<<"B = "<<b<<", "<<"C = "<<c<<endl;

    temp = c;
    c = a;
    a = b;
    b = temp;
    cout<<"A = "<<a<<", "<<"B = "<<b<<", "<<"C = "<<c<<endl;

    return 0;

    
}
