#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(intstack *s, int max)
{
    s->ptr=0;
    if((s->stk = calloc(max,sizeof(int)))==NULL)
    {
        s->max=0;
        return -1;
    }
    s->max=max;
    return 0;
}

int Push(intstack *s, int x)
{
    if(s->ptr>=s->max)
        return -1;
    s->stk[s->ptr++]=x;
    return 0;
}

int Pop(intstack *s, int *x)
{
    if(s->ptr<=0)
        return -1;
    *x=s->stk[--(s->ptr)];
    return 0;
}

int Peek(intstack *s, int *x)
{
    if(s->ptr<=0)
        return -1;
    *x=s->stk[s->ptr-1];
    return 0;
}

void Clear(intstack *s)
{
    s->ptr=0;
}

int Capacity(const intstack *s)
{
    return (s->max);
}

int ssize(const intstack *s)
{
    return (s->ptr);
}

int IsEmpty(const intstack *s)
{
    return (s->ptr <= 0);
}

int IsFull(const intstack *s)
{
    return (s->ptr>=s->max);
}

int Search(const intstack *s,int x)
{
    int i;
    for(i=s->ptr-1;i>=0;i--)
    {
        if(x==s->stk[i])
            return i;
    }
    return -1;
}

void Print(const intstack *s)
{
    int i;
    for(i=0;i<s->ptr;i++)
    {
        printf("%d ",s->stk[i]);
    }
    printf("\n");
}

void Terminate(intstack *s)
{
    s->ptr=0;
    s->max=0;
    if(s->stk!=NULL)
        free(s->stk);
}
