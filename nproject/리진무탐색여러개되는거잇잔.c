#include <stdio.h>
#include <stdlib.h>

int tsearch(int a[],int n,int ky,int *count)
{
	int l=0;
	int r=n-1;
	int m;
	int c=1,temp;
	do
	{
		m=(l+r)/2;
		if(a[m]==ky)
			{
				temp=m;
				while(a[m+1]==ky)
				{
					m++;
					c++;
				}
				m=temp;
				while(a[m-1]==ky)
				{
					m--;
					c++;
				}
				*count=c;
				return m;
			}
		else if(a[m]>ky)
			{
				r=m-1;
			}
		else if(a[m]<ky)
			{
				l=m+1;
			}
	}while(l<=r);
	return -1;
	
}

int main(void)
{
	int *p,nx,i,ky;
	int count=1;
	printf("� : ");
	scanf("%d",&nx);
	p=calloc(nx,sizeof(int));
	printf("������������ �����\n");
	printf("x[0] = ");
	scanf("%d",&p[0]);
	for(i=1;i<nx;i++)
	{
		do{
			printf("x[%d] = ",i);
			scanf("%d",&p[i]);
		}while(p[i]<p[i-1]);
	}
	printf("�� ã�� : ");
	scanf("%d",&ky);
	int idx=tsearch(p,nx,ky,&count);
	if(idx==-1)
		printf("�� ��ã�ڴ�.");
	if(count!=1)
		printf("�װ� x[%d]���� x[%d]���� %d �� ����",idx,idx+count-1,count);		
	else
		printf("�װ� x[%d]�� ����",idx);	
	return 0;
}
