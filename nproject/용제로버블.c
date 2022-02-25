#include <stdio.h>
#include <stdlib.h>

void pirnt(int a[],int n)
{
	printf("\n");
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}




int is_sorted(const int a[], int n)
{
	int i,exc=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
			return 0;
	}
	return 1;
}


void swap(int *p,int *q)
{
	*p=*p^*q;
	*q=*p^*q;
	*p=*p^*q;
}
void printt(int a[],int n,int s)
{
	int i;
	char k;
	k=(a[s-1]>a[s]) ? '+' : '-';
	for(i=0;i<n;i++)
		printf("%3d %c",a[i],(i==s-1) ? k : ' ');

	printf("\n");
}

int bubble(int a[], int n)
{
	int i,j=0;
	int s1=0;
	int s2=0;
	int ch;
	int last;
	int p=n-1;
	for(i=0;i<n-1;i++)
	{
		last=0;
		ch=0;
		printf("\nÆÐ½º %d:\n",i+1);
		for(j=0;j<p;j++)
		{
			s1++;
			printt(&a[0],n,j+1);
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				s2++;
				ch++;
				last=j;
			}
		}
		p=last;
		if(last==0)
			break;
		if(ch==0)
			break;
	}
	
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nºñ±³È½¼ö : %d \n±³È¯È½¼ö : %d",s1,s2);
	return 0;
}

int bubble3(int a[],int n)
{
	int k=1;
	int last=0;
	while(k!=n-1)
	{
		int j;
		for(j=0;j<n-k;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				last=j;
			}
		}
		pirnt(&a[0],n);
		k=n-last;
	}
}

int bubbler(int a[],int n,int *s,int *p)
{
	int i;
	for(i=n-1;i>0;i--)
	{
		(*s)++;
		if(a[i]<a[i-1])
			{
				swap(&a[i],&a[i-1]);
				(*p)++;
			}
	}
}
int bubblef(int a[],int n,int *s,int *p)
{
	int i;
	for(i=0;i>n-1;i++)
	{
		(*s)++;
		if(a[i]>a[i+1])
			{
				swap(&a[i],&a[i-1]);
				(*p)++;
			}
	}
}




int dualbubble(int a[],int n)
{
	int s=0;
	int p=0;
	while(!(is_sorted(&a[0],n)))
	{
		bubbler(&a[0],n,&s,&p);
		bubblef(&a[0],n,&s,&p);
	}
	pirnt(&a[0],n);
	printf("\n\nºñ±³È½¼ö %d\n±³È¯È½¼ö %d",s,p);
	return 0;
	
}






int main(void)
{
	int na;
	na=8;
	int a[]={9,4,8,7,6,3,2,1};
	int i;
	for(i=0;i<na;i++)
		printf("%d ",a[i]);
	printf("\n");
	bubble(&a[0],na);
	int b[]={9,4,8,7,6,3,2,1};
	dualbubble(&b[0],na);
	printf("\n %d",is_sorted(&a[0],8));
	return 0;
}
