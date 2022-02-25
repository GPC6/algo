#include<stdio.h>

void ntri(int n)
{
    int i=0,j=0,k=0,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=0;k<2*n-1-2*i;k++)
        {
            m=(i+1)%10;
            printf("%d",m);
        }
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
    
    
    
    ntri(n);
    
    
    return 0;
}