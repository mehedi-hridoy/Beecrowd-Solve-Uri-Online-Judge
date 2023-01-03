#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios_base::sync_with_stdio(false);
    int arr[1000];
    int n;
    cin>>n;
    
    int x = 0;

    for(int i=0;i<1000;i++){

       cout<<"N["<<i<<"] = "<<x<<endl;
       x++;
       if(x+1>n) 
       x = 0;
    }

    return 0;

}
