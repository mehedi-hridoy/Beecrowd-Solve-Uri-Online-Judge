#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,maiorAb,m;
    cin>>a>>b>>c;
    maiorAb = (a+b+abs(a-b))/2;
    m = (maiorAb+c+abs(maiorAb-c))/2;
    cout<<m<<" eh o maior"<<endl;
    return 0;
}
