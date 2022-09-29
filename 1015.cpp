#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,avg,num1,num2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    num1 = x2-x1;
    num2 = y2-y1;
    avg = sqrt((num1*num1)+(num2*num2));
    printf("%.4f\n",avg);
    return 0;
}
