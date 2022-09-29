#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && b>c) {
        cout<<c<<"\n"<<b<<"\n"<<a<<endl;
        cout<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<endl;
    }
     if(b>a && a>c) {
        cout<<c<<"\n"<<a<<"\n"<<b<<endl;
        cout<<"\n";

        cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    }
     if(b>c && c>a) {
        cout<<a<<"\n"<<c<<"\n"<<b<<endl;
        cout<<"\n";

        cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    }
     if(c>b && b>a) {
        cout<<a<<"\n"<<b<<"\n"<<c<<endl;
        cout<<"\n";

        cout<<a<<"\n"<<b<<"\n"<<c<<endl;

        

    }
     if(c>a && a>b) {
        cout<<b<<"\n"<<a<<"\n"<<c<<endl;
        cout<<"\n";

        cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    }
     if(a>c && c>b) {
        cout<<b<<"\n"<<c<<"\n"<<a<<endl;
        cout<<"\n";

        cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    }
     
     return 0;
}
