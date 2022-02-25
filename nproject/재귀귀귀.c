#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	if(n>0)
		return (n*factorial(n-1));
	else
		return 1;
}

int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int notfactorial(int n)
{
	int i,p=1;
	for(i=1;i<=n;i++)
		p *= i;
	return p;
}

int notgcd(int x,int y)
{
	int temp;
	while(y!=0)
	{
		temp=x%y;
		x=y;
		y=temp;
	}
	return x;
}

int gcd_array(const int a[],int n)
{
	if(n==1)
		return a[0];
	else if (n==2)
		return gcd(a[0],a[1]);
	else 
		return gcd(a[0],gcd_array(&a[1],n-1));
}

int main(void)
{
	int *p;
	int y,x=0;
	while(1)
	{
		printf("넣을게 : ");
		scanf("%d",&x);
		if(x<0)
			break;
		printf("%d ",factorial(x));
		printf("%d\n",notfactorial(x));
	}
	while(1)
	{
		printf("넣을게 : ");
		scanf("%d",&x);
		if(x<1)
			break;
		printf("더 넣을게 : ");
		scanf("%d",&y);
		printf("%d %d\n",gcd(x,y),notgcd(x,y));
	}
	int nx;
	printf("몇개 : ");
	scanf("%d",&nx);
	p=calloc(nx,sizeof(int));
	for(x=0;x<nx;x++)
	{
		printf("x[%d] : ",x);
		scanf("%d",&p[x]);
	}
	printf("%d",gcd_array(p,nx));
	return 0;
}
