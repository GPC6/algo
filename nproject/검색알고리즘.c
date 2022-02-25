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
	printf("검색을 하자\n 요소의 수는 ? : ");
	scanf("%d",&nx);
	x = calloc(nx+1,sizeof(int));
	printf("배열을 입력해 (오름차순으로)\n");
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
	printf("뭘 찾을래 ? : ");
	scanf("%d",&ky);
	int idx = lsearch(x,nx,ky);
	if(idx==nx)
	{
		printf("\n못 찾겠어~");
	}
	else
	{
		printf("\n%d는 x[%d]에 있어~",ky,idx);
	} 
}
