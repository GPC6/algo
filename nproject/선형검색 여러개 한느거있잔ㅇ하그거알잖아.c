#include <stdio.h>
#include <stdlib.h>

int ls(int a[],int n,int ky,int idx[])
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==ky)
		{
			idx[j]=i;
			j++;
		}
	}
	return j;
}

int main(void)
{
	int *p,*q;
	int nx;
	printf("� : ");
	scanf("%d",&nx);	
	p=calloc(nx,sizeof(int));
	q=calloc(nx,sizeof(int));
	int i;
	for(i=0;i<nx;i++)
	{
		printf("x[%d] = ",i);
		scanf("%d",&p[i]);
	}
	printf("��ã�� : ");
	int ky;
	scanf("%d",&ky);
	int idx=ls(p,nx,ky,q);
	printf("%d�� %d�� �ְ�",ky,idx);
	for(i=0;i<idx;i++)
	{
		printf("x[%d] ",q[i]);
	}
	printf("�� �־�");
	
	return 0;
}
