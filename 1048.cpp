#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float salary,newSalary,extra;
    cin>>salary;

    if(salary>=0.00 && salary<=400.00){
        newSalary=salary+salary*15/100;
        extra=salary*15/100;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<newSalary;
        cout<<fixed<<setprecision(2)<<"\nReajuste ganho: "<<extra;
        cout<<"\nEm percentual: 15 %"<<endl;
        
    }
     if(salary>400.00 && salary<=800.00){
        newSalary=salary+salary*12/100;
        extra=salary*12/100;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<newSalary;
        cout<<fixed<<setprecision(2)<<"\nReajuste ganho: "<<extra;
        cout<<"\nEm percentual: 12 %"<<endl;
    }
     if(salary>800.00 && salary<=1200.00){
        newSalary=salary+salary*10/100;
        extra=salary*10/100;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<newSalary;
        cout<<fixed<<setprecision(2)<<"\nReajuste ganho: "<<extra;
        cout<<"\nEm percentual: 10 %"<<endl;
    }
     if(salary>1200.00 && salary<=2000.00){
        newSalary=salary+salary*7/100;
        extra=salary*7/100;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<newSalary;
        cout<<fixed<<setprecision(2)<<"\nReajuste ganho: "<<extra;
        cout<<"\nEm percentual: 7 %"<<endl;
    }
     if(salary>2000.00){
        newSalary=salary+salary*4/100;
        extra=salary*4/100;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<newSalary;
        cout<<fixed<<setprecision(2)<<"\nReajuste ganho: "<<extra;
        cout<<"\nEm percentual: 4 %"<<endl;
    }

   
    return 0;
}
