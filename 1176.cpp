#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    int t;
    cin>>t;
    while(t--)
    {
       long long  int n;
        cin>>n;

        long long int a = 0,b=1,c;
        if(n==0){
            cout<<"Fib("<<n<<") = "<<a<<endl;
        }

       else if(n==1){
            cout<<"Fib("<<n<<") = "<<b<<endl;
            
        }
        else {
            for(int i=2;i<=n;i++) {
                c = a+b;
                a = b;
                b = c;

            }
            cout<<"Fib("<<n<<") = "<<c<<endl;
            
        }
        
    }

    return 0;
}
