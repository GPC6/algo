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


int pang(int a[],int n,int k)
{
	if(a[n-1]==0)
		return 0;
    int l,r,i,s;
    l=0;
    r=n-1;
    s=(l+r)/2;
	do
	{

		if(a[s]==0)
			l=s+1;
		if(a[s]!=0)
			r=s-1;
		s=(l+r)/2;	
	}while(l<r);
	if(a[s]==0)
		s++;
    int lp=s;
    int rp=n-1;
    s=0;
    while(lp!=rp)
    {
        if(a[lp]==0)
            lp++;
        a[lp]--;
        a[rp]++;
        if(a[rp]==k)
        {
            a[rp]=0;
            rp--;
        }
        s++;
    }
    if(a[rp]!=0)
    	return -1;
    return s;
    
}


int main(void)
{
    int n,k,t,i;
    int *p;
    scanf("%d %d %d",&n,&k,&t);
    p=calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    qsort(p,n,sizeof(int),compare);
    int v=pang(p,n,k);
    if(v<=t && v>=0)
        printf("YES");
	else
		printf("NO");    

    free(p);
    return 0;
}
    
