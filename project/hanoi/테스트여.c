#include <stdio.h>
#include "IntStack.h"

void noi(intstack s[])
{
	printf("%d",((s+1)->stk)[0]);
	Print(&s[0]);
	noi(&s[0]);
}


int main(void)
{
	intstack s[3];
	int i;
	int n=4;
	for(i=0;i<3;i++)
		Initialize(&s[i],n);
	for(i=n;i>0;i--)
	{
		Push(&s[0],i);
		Push(&s[1],i);
		Push(&s[2],i);
	}
	Clear(&s[1]);
	Push(&s[1],6);
	noi(&s[0]);
	
	
	return 0;
}
