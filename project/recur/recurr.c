#include <stdio.h>
#include "IntStack.h"

void recur3(int n)
{
	if(n>0)
	{
		recur3(n-1);
		recur3(n-2);
		printf("%d\n",n);

	}
}




int main(void)
{
	recur3(4);
	
	return 0;
} 
