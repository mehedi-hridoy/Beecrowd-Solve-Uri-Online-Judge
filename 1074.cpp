#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0) 
      printf("NULL\n");
    else if(n%2==0 && n>0) 
      printf("EVEN POSITIVE\n");
    else if(n%2==0 && n<0) 
       printf("EVEN NEGATIVE\n");
    else if(n%2 !=0 && n>0) 
        printf("ODD POSITIVE\n");
    else if(n%2 !=0 && n<0) 
         printf("ODD NEGATIVE\n");

         return 0;           
}
