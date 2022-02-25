#include<stdio.h>

void uptri(int n)
{
    int i=0,j=0,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            printf(" ");
        for(k=0;k<2*i+1;k++)
            printf("*");
        printf("\n");
    }
    
 }
void downtri(int n)
{
    int i=0,j=0,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
            printf(" ");
        for(k=0;k<2*n-3-2*i;k++)
            printf("*");
        printf("\n");
    }
    
 }




int main()
{
    int n;
    do
    {
        printf("몇줄 : ");
        scanf("%d",&n);
    }while(n<=0);
    
    uptri(n);
    downtri(n);
    
    return 0;
    
}
    