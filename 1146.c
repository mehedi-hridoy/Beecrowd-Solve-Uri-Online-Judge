#include<stdio.h>
int main(){
    int i,j,n;
    for(i=0;n!=0;++i){
        scanf("%d",&n);
        if(n==0) break;
        else{
        for(j=1;j<n;++j){
            printf("%d ",j);

        }
            printf("%d\n",n);
        }
    }
return 0;
}


//Another Solution made my me
#include<iostream>
using namespace std;
int main()
{
    while(1){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        if(n>0){
            for(int i=1;i<=n-1;i++){
                cout<<i<<" ";
               
            }
            cout<<n;
            cout<<"\n";
        }
    }
    return 0;
}
