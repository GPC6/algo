#include <stdio.h>

	int mid3(int a, int b, int c)
	{
		int mid;
		if(a>=b)
		{
				if(b>=c)
					return b;
				else if(a<=c)
					return a;	
				else
					return c;
			
		}
		else if(c < a)
			return a;
		else if(c>b)
			return b;
	}
	
int med3(int a,int b,int c)
{
	int arr[3];
	int temp;
	arr[0]=c;
	arr[1]=b;
	arr[2]=a;
	if(arr[2]<arr[1])
	{
		temp=arr[2];
		arr[2]=arr[1];
		arr[1]=temp;
		
	}
	if(arr[2]<arr[0])
	{
		temp=arr[2];
		arr[2]=arr[0];
		arr[0]=temp;
	}
	if(arr[1]<arr[0])
	{
		temp=arr[1];
		arr[1]=arr[0];
		arr[0]=temp;
	}
	return arr[1];
}



int main(void)
{
	for(;;)
	{
	int a,b,c;
	printf("\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("\n");
	printf("%d\n",mid3(a,b,c));
	printf("%d\n",med3(a,b,c));
	}
	return 0;
}
