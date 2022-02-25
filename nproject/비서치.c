#include <stdio.h>
#include <stdlib.h>
 
void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size, 
	int(*compar)(const void*, const void*))
{
	char *x=(char *)base;
	size_t i;
	for(i=0;i<nmemb;i++)
	{
		if(((*compar)(&x[i*size],key))==0)
		{
			return (&x[i*size]);
		}
	}
	return NULL;
	

	
}

void *binsearch(const void *key, const void *base, size_t nmemb, size_t size, 
	int(*compar)(const void*, const void*))
{
	char *x=(char *)base;
	size_t i;
	int pl,pr,pc;
	pl=0;
	pr=(nmemb-1);
	do{
		pc=(pl+pr)/2;
		if((*compar)(&x[pc*size],key)==0)
			return (&x[pc*size]);
		if((*compar)(&x[pc*size],key)>0)
			pr=pc-1;
		if((*compar)(&x[pc*size],key)<0)
			pl=pc+1;
	}while(pl<=pr);
	return NULL;
	

	
}
void *binsearchx(const void *key, const void *base, size_t nmemb, size_t size, 
	int(*compar)(const void*, const void*))
{
	char *x=(char *)base;
	size_t i;
	int pl,pr,pc;
	pl=0;
	pr=(nmemb-1);
	do{
		pc=(pl+pr)/2;
		if((*compar)(&x[pc*size],key)==0)
			{
				while((*compar)(&x[(pc-1)*size],key)==0)
					pc--;
				return (&x[pc*size]);
			}
		if((*compar)(&x[pc*size],key)>0)
			pr=pc-1;
		if((*compar)(&x[pc*size],key)<0)
			pl=pc+1;
	}while(pl<=pr);
	return NULL;
	

	
}

 
 
 
 
 
 
int compare(int *a,int *b)
{
	if(*a>*b)
		return 1;
	if(*a==*b)
		return 0;
	if(*a<*b)
		return -1;
}

int main(void)
{
	int nx,i;
	int *p,*q;
	int ky;
	printf("몇개 : ");
	scanf("%d",&nx);
	p=calloc(nx,sizeof(int));
	printf("x[0] = ");
	scanf("%d",&p[0]);
	for(i=1;i<nx;i++)
	{
		do
		{
			printf("x[%d] = ",i);
			scanf("%d",&p[i]);
		}while(p[i]<p[i-1]);
	}
	printf("뭐찾음 : ");
	scanf("%d",&ky);
 	q=binsearchx(&ky,p,nx,sizeof(int),(int(*)(const void *, const void *)) compare);
	if(q==NULL)
		printf("없어");
	else
		printf("x[%d]에 있음",q-p);
	free(p); 
	return 0;
}
