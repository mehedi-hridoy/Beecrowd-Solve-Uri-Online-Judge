#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,area,perimeter;
    scanf("%f%f%f",&a,&b,&c);
    if( (a+b)>c && (b+c)>a && (c+a)>b ) {
          
          perimeter = a+b+c;
          printf("Perimetro = %.1f\n",perimeter);
    }
    else 
    {
        area = 0.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
