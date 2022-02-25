#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first,const void* second)
{
	if(*(int*)first > *(int*)second)
		return 1;
	else if(*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
void swap(int *p,int *q)
{
    if((*p)!=(*q))
    {
        *p=*p^*q;
        *q=*p^*q;
        *p=*p^*q;
    }
}


int qisort(int a[],int left,int right)
{
    int x,lp,rp;
    rp=right;
    lp=left;
    x=a[(right+left)/2];
    do
    {
        while(a[rp]>x)
            rp--;
        while(a[lp]<x)
            lp++;
        if(lp<=rp)
        { 
            swap(&a[lp],&a[rp]);
            lp++;
            rp--;
        }
    }while(lp<=rp);
    if(left<rp) qisort(a,left,rp);
    if(rp<right) qisort(a,lp,right);

    return 0;


}

int main(void)
{
	int a[]={0,1,1,0};
	qsort(a,4,sizeof(int),compare);
	int i;
	for(i=0;i<4;i++)
		printf("%d",a[i]);
		
	return 0;
}
