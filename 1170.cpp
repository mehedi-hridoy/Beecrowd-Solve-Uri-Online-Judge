#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        float n;
        cin>>n;
        int count = 0;
        while(n>1) {
            count++;

            n = n/2;
        }
        cout<<count<<" dias"<<endl;
    }

    return 0;
}
