#include <stdio.h>

void mark(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf("%3d",j+1);
		for(j=0;j<2*n-1-2*i;j++)
			printf("%3d",i+1);
		for(j=0;j<i;j++)
			printf("%3d",i-j);
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<i;j++)
			printf("%3d",j+1);
		for(j=0;j<2*n-2*i-1;j++)
			printf("%3d",i+1);
		for(j=0;j<i;j++)
			printf("%3d",i-j);
		printf("\n");
	}
	
	
}

int main(void)
{
	int a=1;
	printf("과녁 만들기\n");
	while(a>0)
	{
		do
		{
			printf("\n숫자를 입력하시오 (0은 종료) : ");
			scanf("%d",&a);
		}while(!(a>=0));
		mark(a);
	}
	return 0; 
}
