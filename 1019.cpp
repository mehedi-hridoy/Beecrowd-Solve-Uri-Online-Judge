#include<iostream>
using namespace std;
int main()
{
    int N,h,m1,m,s;
    cin>>N;
    s = N%60;
    m1 = N/60;
    h = m1/60;
    m = m1%60;
    
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;


}
