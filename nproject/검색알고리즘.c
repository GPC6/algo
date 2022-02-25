#include <stdio.h>
#include <stdlib.h>

int lsearch(int a[], int n, int key)
{
	int k,j,i=0;
	a[n]=key;
	printf("   | ");
	for(j=0;j<n;j++)
		printf("%d ",j);
	printf("\n---+");
	for(j=0;j<n;j++)
		printf("---");
	for(;;i++)
	{
		printf("\n   |");
		for(j=0;j<2*i+1;j++)
			printf(" ");
		printf("*\n");
		printf("  %d|",i);
		for(j=0;j<n;j++)
			printf(" %d",a[j]);
		printf("\n   |");
		if(a[i]==key)
			break;
	}
	return i;
}

int main(void)
{
	int *x;
	int nx,ky,i;
	printf("�˻��� ����\n ����� ���� ? : ");
	scanf("%d",&nx);
	x = calloc(nx+1,sizeof(int));
	printf("�迭�� �Է��� (������������)\n");
	printf("x[0] = ");
	scanf("%d",&x[0]);
	for(i=1;i<nx;i++)
	{
		do
		{
			printf("x[%d] = ",i);
			scanf("%d",&x[i]);
		}while(x[i]<x[i-1]);
	}
	printf("�� ã���� ? : ");
	scanf("%d",&ky);
	int idx = lsearch(x,nx,ky);
	if(idx==nx)
	{
		printf("\n�� ã�ھ�~");
	}
	else
	{
		printf("\n%d�� x[%d]�� �־�~",ky,idx);
	} 
}
