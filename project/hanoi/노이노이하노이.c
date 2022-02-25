#include <stdio.h>
#include "IntStack.h"

void noi(int x,int n,int y,intstack s[])
{
	int i,k;
	if(n>1)
		noi(x,n-1,3-x-y,&s[0]);
	Pop(&s[x],&k);
	Push(&s[y],k);
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d번째 접시 : ",i+1);
		Print(&s[i]);
	}
	if(n>1)
		noi(3-x-y,n-1,y,&s[0]);
}


int main(void)
{
	intstack s[3];
	int n,i;
	printf("노이노이하노이 : ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
		Initialize(&s[i],n);
	for(i=n;i>0;i--)
	{
		Push(&s[0],i);
	}
	for(i=0;i<3;i++)
	{
		printf("%d번째 접시 : ",i+1);
		Print(&s[i]);
	}
	noi(0,n,2,&s[0]);

	return 0;	
}
