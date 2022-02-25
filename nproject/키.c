#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minof(const int a[],int n)
{
	int min=a[0];
	int i; 
	for(i=1; i<n; i++)
	{
	if(min>a[i])
			min=a[i];
	}
	return min;
}
int sumof(const int a[],int n)
{
	int sum=a[0];
	int i; 
	for(i=1; i<n; i++)
	{
	sum+=a[i];
	}
	return sum;
}
double aveof(const int a[],int n)
{
	int sum=a[0];
	int i; 
	for(i=1; i<n; i++)
	{
	sum+=a[i];
	}
	double ave=sum/n;
	return ave;
}

void showh(const int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
}

int main(void)
{
	int i;
	srand(time(NULL));
	int *p;
	int n=5+rand()%16;
	p = calloc(n, sizeof(int));
	for(i=0;i<n;i++)
		p[i]=100+(rand()%90);
	int min=minof(p,n);
	showh(p,n);
	int sum = sumof(p,n);
	int ave = aveof(p,n);
	printf("\nmin : %d \n",min);
	printf("sum : %d \n",sum);
	printf("ave : %d \n",ave);
	return 0;
}
