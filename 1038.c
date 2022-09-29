#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    float A,B,C,D,E;

    float a=4.00,b=4.50,c=5.00,d=2.00,e=1.50;

    if(X==1) {
        A = a*Y;
        printf("Total: R$ %.2f\n",A);
    }

     if(X==2) {
        B = b*Y;
        printf("Total: R$ %.2f\n",B);
    }
     if(X==3) {
        C = c*Y;
        printf("Total: R$ %.2f\n",C);
    }
     if(X==4) {
        D = d*Y;
        printf("Total: R$ %.2f\n",D);
    }
     if(X==5) {
        E = e*Y;
        printf("Total: R$ %.2f\n",E);
    }
    return 0;
}
