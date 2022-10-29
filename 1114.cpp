#include<iostream>
using namespace std; 
int main()
{
    int n;
    while(n!=2002){
        cin>>n;
        if(n==2002){
            cout<<"Acesso Permitido"<<endl;
        }else {
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}
