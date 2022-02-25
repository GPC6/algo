#include <stdio.h>
#include <stdlib.h>

int tsearch(int a[],int n,int ky)
{
	int l=0;
	int r=n-1;
	int m;
	do
	{
		m=(l+r)/2;
		if(a[m]==ky)
			{
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
	int idx=tsearch(p,nx,ky);
	if(idx==-1)
		printf("�� ��ã�ڴ�.");
	else
		printf("�װ� x[%d]�� ����",idx);
		
		return 0;
}
