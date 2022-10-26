#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,code,quantity;
    cin>>n;
    float price;
     float sum = 0.00;
    for(int i=1;i<=n;i++){
        cin>>code>>quantity;
        {
            if(code==1001){
                price = 1.50*quantity;
            }
            if(code==1002){
                price = 2.50*quantity;
            }if(code==1003){
                price = 3.50*quantity;
            }if(code==1004){
                price = 4.50*quantity;
            }if(code==1005){
                price = 5.50*quantity;
            }
           
            
        }
       sum = sum + price;
    }
    
   
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}
