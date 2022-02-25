#include <stdio.h>
#include <stdlib.h>

int tsearch(int a[],int n,int ky)
{
	int l=0;
	int r=n-1;
	int m;
	int j;
	printf("   | ");
	for(j=0;j<n;j++)
		printf("%d ",j);
	printf("\n---+");
	for(j=0;j<n;j++)
		printf("---");
	do
	{
		printf("\n   | ");
		
		m=(l+r)/2;
		int j;
//		2*r+1 전체 띄기수 
//		2*ㅣ-1 왼쪽 띄기수 
//		2*m-2*l 가운데 띄기수 
//		2*r-2 오른쪽 띄기수 
		for(j=0;j<2*l;j++)
			printf(" ");
		printf("<");
		for(;j<2*m-1;j++)
			printf(" ");	
		printf("+");
		for(;j<2*r-2;j++)
			printf(" ");
		printf(">");	
		printf("\n  %d| ",m);
		for(j=0;j<n;j++)
			printf("%d ",a[j]);
		printf("\n   | ");
		
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
	printf("몇개 : ");
	scanf("%d",&nx);
	p=calloc(nx,sizeof(int));
	printf("오름차순으로 적어라\n");
	printf("x[0] = ");
	scanf("%d",&p[0]);
	for(i=1;i<nx;i++)
	{
		do{
			printf("x[%d] = ",i);
			scanf("%d",&p[i]);
		}while(p[i]<=p[i-1]);
	}
	printf("뭐 찾음 : ");
	scanf("%d",&ky);
	int idx=tsearch(p,nx,ky);
	if(idx==-1)
		printf("야 못찾겠다.");
	else
		printf("그거 x[%d]에 있음",idx);
		
		return 0;
}
