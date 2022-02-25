#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_sorted(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
			return 0;
	}
	return 1;
}
int is_sorted1(int a[],int n)
{
	int i;
	for(i=1;i<n-1;i++)
	{
		if(a[i]>a[i+1])
			return 0;
	}
	return 1;
}

void pirnt(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
}
void pirnt1(int a[],int n)
{
	int i;
	for(i=1;i<n;i++)
		printf("%3d",a[i]);
}

void swap(int *p,int *q)
{
	if((*p)!=(*q))
	{
		*p=*p^*q;
		*q=*p^*q;
		*p=*p^*q;
	}
	
}

void insert(int a[],int n,int t,int p)
{
	int i,tmp;
	tmp=a[t];
	for(i=t-1;i>p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=tmp;
}



int isort(int a[],int n)
{
	int p,i,j;
	for(i=1;i<n;i++)
	{
		j=1;
		p=i;
		while(a[i-j]>a[i])
		{
			if(p==0)
				break;
			
			p=i-j;
			j++;
			if(j>i)
				j=i;
		}
		if(p!=i)
			insert(&a[0],n,i,p);
	}
	
	return (is_sorted(&a[0],n));
}

int iSort(int a[],int n)
{
	printf("\n");
	int k,tmp,i,j;
	for(i=1;i<n;i++)
	{
		printf("");
		pirnt(&a[0],n);
		printf("\n");
		tmp=a[i];
		for(j=i;j>0 && a[j-1]>tmp;j--)
			a[j]=a[j-1];
		a[j]=tmp;
		for(k=0;k<3*j;k++)
			printf(" ");
		if(j!=i)
		{
			printf("^");
			for(k=0;k<3*(i-j)+1;k++)
				printf("-");
			printf("+");
		}
		else
		{
			for(k=0;k<3*(i-j)+2;k++)
				printf(" ");
			printf("+");
		}
		printf("\n");
		
	}
	return (is_sorted(&a[0],n));
}

int iSSort(int a[],int n)
{
	int i,j,tmp;
	for(i=2;i<n;i++)
	{	
		tmp=a[i];
		a[0]=tmp;
		for(j=i;a[j-1]>tmp;j--)
			a[j]=a[j-1];
		a[j]=tmp;
	}
	
	return (is_sorted1(&a[0],n));
}

int iSSOrt(int a[],int n)
{
	int i,j,tmp;
	int f,r;
	if(a[0]>a[1])
		swap(&a[0],&a[1]);
	for(i=2;i<n;i++)
	{
		tmp=a[i];
		f=0;
		r=i;
		if(tmp<a[i-1])
		{
			while(r-f!=1)
			{
				if(a[(r+f)/2]>tmp)
					r=(r+f)/2;
				else if(a[(r+f)/2]<tmp)
					f=(r+f)/2;	
				else
				{
					r=(r+f)/2;
					f=r-1;
				}
			}
		}
		insert(&a[0],n,i,r);
		printf("\n");
		pirnt(&a[0],n);
		
	}
	
	return (is_sorted(&a[0],n));
}

int iSSORt(int a[],int n)
{
	int i,j,tmp;
	int f,r;
	if(a[0]>a[1])
		swap(&a[0],&a[1]);
	for(i=2;i<n;i++)
	{
		tmp=a[i];
		f=0;
		r=i;
		if(tmp<a[i-1])
		{
			while(r-f!=1)
			{
				if(a[(r+f)/2]>tmp)
					r=(r+f)/2;
				else if(a[(r+f)/2]<tmp)
					f=(r+f)/2;	
				else
				{
					r=(r+f)/2;
					f=r-1;
				}
			}
		}
		memmove(a+r+1,a+r,(i-r)*sizeof(int));
		a[r]=tmp;
		printf("\n");
		pirnt(&a[0],n);
		
	}
	
	return (is_sorted(&a[0],n));
}



int ssort(int a[],int n)
{
	printf("\n");
	int k,j,i=0;
	int min;
	while(!(is_sorted(&a[0],n)))
	{
		min=i;

		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		for(k=0;k<n;k++)
		{
			if(k==i)
				printf("%3c",'*');
			else if(k==min)
				printf("%3c",'+');
			else
				printf("%3c",' ');
		}
		printf("\n");
		pirnt(&a[0],n);
		swap(&a[min],&a[i]);
		i++;	
		printf("\n");
	}
	return (is_sorted(&a[0],n));
}




int main(void)
{
	int a[]={4,1,6,7,3,5,2,8,9};
	int na=9;
	pirnt(&a[0],na);
	printf("\n%d\n",iSSORt(&a[0],na));
	pirnt(&a[0],na);

	
	return 0;
	
}
