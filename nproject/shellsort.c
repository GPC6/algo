#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q)
{
	if((*p)!=(*q))
	{
		*p=*p^*q;
		*q=*p^*q;
		*p=*p^*q;
	}
}

int is_sorted(int a[],int n)
{
	int i=0;
	while(i<n-1)
	{
		if(a[i]>a[i+1])
			return 0;
		i++;
	}
	return 1;
}

void pirnt(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
}

int shellsort(int a[],int n)
{
	int s=0;
	int i,j,h=n/2;
	for(;h>0;h/=2)
	{
		for(i=h;i<n;i++)
		{
			for(j=i-h;j>=0 && a[j]>a[j+h];j-=h)
				{
					swap(&a[j],&a[j+h]);
					s++;
				}
		}
	}
	printf("\n ÀÌµ¿È½¼ö : %d\n",s);
	return (is_sorted(&a[0],n));
}

int shellsort2(int a[],int n)
{
	int i,j,h,s=0;
	for(h=1;h<n/9;h=h*3+1)
	;
	for(;h>0;h/=3)
	{
		for(i=h;i<n;i++)
		{
			for(j=i-h;j>=0 && a[j]>a[j+h];j-=h)
				{
					swap(&a[j],&a[j+h]);
					s++;
				}
		}
	}
	printf("\n ÀÌµ¿È½¼ö : %d\n",s);
	return (is_sorted(&a[0],n));
}


int main(void)
{
	int a[]={4,5,2,6,8,7,1,3,9,10,11,23,30,15,12};
	int na=15;
	pirnt(&a[0],na);
	printf("\n%d\n",shellsort2(&a[0],na));
	pirnt(&a[0],na);
	printf("\n");
	int b[]={4,5,2,6,8,7,1,3,9,10,11,23,30,15,12};
	pirnt(&b[0],na);
	printf("\n%d\n",shellsort2(&b[0],na));
	pirnt(&b[0],na);
	printf("\n");
	
	return 0;
	
}
