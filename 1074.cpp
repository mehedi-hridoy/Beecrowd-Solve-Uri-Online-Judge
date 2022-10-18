#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++) {
        cin>>arr[i];


    }
    for(int i=0;i<n;i++) {
        if(arr[i]==0)
      cout<<"NULL\n";
    else if(arr[i]%2==0 && arr[i]>0)
      cout<<"EVEN POSITIVE\n";
    else if(arr[i]%2==0 && arr[i]<0)
       cout<<"EVEN NEGATIVE\n";
    else if(arr[i]%2 !=0 && arr[i]>0)
        cout<<"ODD POSITIVE\n";
    else if(arr[i]%2 !=0 && arr[i]<0)
         cout<<"ODD NEGATIVE\n";
    }
    return 0;

}
