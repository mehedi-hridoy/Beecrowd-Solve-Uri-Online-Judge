#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    scanf("%d",&n);

    for(int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,n);
        n = n+n;
    }

    return 0;
}
