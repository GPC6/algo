#include <stdio.h>
#include <stdlib.h>
#include "IntStack2.h"

int Initialize(intstack2 *s, int max)
{
    s->ptra=0;
    s->ptrb=0;
    if((s->stk = calloc(max,sizeof(int)))==NULL)
    {
        s->max=0;
        return -1;
    }
    s->max=max;
    return 0;
}

int Push(intstack2 *s,int c, int x)
{
    if(s->ptra>=s->max-s->ptrb)
        return -1;
    if(c==1)
    {
    	s->stk[s->ptra++]=x;
	}
	if(c==2)
	{
		s->stk[((s->max)-(s->ptrb)-1)]=x;
		s->ptrb++;
	}
    return 0;
}

int Pop(intstack2 *s,int c, int *x)
{
	if(c==1)
	{
		if(s->ptra<=0)
        	return -1;
        *x=s->stk[--(s->ptra)];
	}
	if(c==2)
	{
		if(s->ptrb<=0)
        	return -1;
        *x=s->stk[(s->max)-(s->ptrb)];
        s->ptrb--;
	}


    return 0;
}

int Peek(intstack2 *s,int c, int *x)
{
    if(c==1)
	{
		if(s->ptra<=0)
        	return -1;
        *x=s->stk[(s->ptra)-1];
	}
	if(c==2)
	{
		if(s->ptrb<=0)
        	return -1;
        *x=s->stk[(s->max)-(s->ptrb)];
	}
}

void Clear(intstack2 *s,int c)
{
	if(c==1)
    	s->ptra=0;
    if(c==2)
    	s->ptrb=0;
}

int Capacity(const intstack2 *s)
{
    return (s->max);
}

int ssize(const intstack2 *s,int c)
{
	if(c==1)
    	return (s->ptra);
	if(c==2)
		return (s->ptrb);
}

int IsEmpty(const intstack2 *s,int c)
{
	if(c==1)
    	return (s->ptra <= 0);
    if(c==2)
    	return (s->ptrb <= 0);
}

int IsFull(const intstack2 *s)
{
    return (s->ptra + s->ptrb >= s->max);
}

int Search(const intstack2 *s,int c,int x)
{
    int i;
    int p,q;
    if(c==1)
    {
    	for(i=s->ptra-1;i>=0;i--)
    	{
        	if(x==s->stk[i])
            	return i;
    	}
	}
	if(c==2)
    {
    	for(i=(s->max)-(s->ptrb);i<s->max;i++)
    	{
        	if(x==s->stk[i])
            	return i;
    	}
	}
    return -1;
}

void Print(const intstack2 *s,int c)
{
    int i;
    if(c==1)
    {
    	for(i=0;i<s->ptra;i++)
    	{
        	printf("%d ",s->stk[i]);
    	}
    	printf("\n");
	}
	if(c==2)
	{
		for(i=s->max-1;i>=(s->max)-(s->ptrb);i--)
    	{
        	printf("%d ",s->stk[i]);
    	}
    	printf("\n");
	}
}

void Terminate(intstack2 *s)
{
    s->ptra=0;
    s->ptrb=0;
    s->max=0;
    if(s->stk!=NULL)
        free(s->stk);
}
