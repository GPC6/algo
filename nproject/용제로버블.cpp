#include <stdio.h>
#include <stdlib.h>

void swap(int *p,int *q)
{
	if((*p)!=(*q))
	{
		*p=*p^*q;
		*q=*p^*q;
		*p=*p^*q;
	}
}

int bubble(int a[], int n)
{
	int i,j=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
	return 0;
}

int main(void)
{
	int a[]={4,2,6,3,7,9,0,3,2,6,8,0};
	int i;
	for(i=0;i<12;i++)
		printf("%d ",a[i]);
	bubble(&a[0],12);
	for(i=0;i<12;i++)
		printf("%d ",a[i]);
		
	return 0;
}
