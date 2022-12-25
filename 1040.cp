#include<bits/stdc++.h>
using namespace std;
int main()

{
    float n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    float avg = (n1*2+n2*3+n3*4+n4*1)/10;

    if(avg>=7.0){
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;

        cout<<"Aluno aprovado."<<endl;
    }

else if(avg>=5.0 && avg<=6.9){
        float exam;
        cin>>exam;
        float newavg;
        newavg = (avg+exam)/2;
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
        cout<<"Aluno em exame."<<endl;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<exam<<endl;
        if(newavg>=5.0){
            cout<<"Aluno aprovado."<<endl;
            cout<<"Media final: "<<fixed<<setprecision(1)<<newavg<<endl;

        }
    else if(avg<5.0) {
            cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<fixed<<setprecision(1)<<newavg<<endl;

        }
    }

    

    if(avg<5.0){
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;

        cout<<"Aluno reprovado."<<endl;
    }
}
