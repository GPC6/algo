#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int Initialize(ArrayIntQueue *q,int max)
{
	if((q->que = calloc(max,sizeof(int)))==NULL)
	{
		q->max=0;
		return -1;
	}
	q->max=max;
	q->num=0;
	return 0;
}

int Enque(ArrayIntQueue *q, int x)
{
	if(q->num>=q->max)
		return -1;
	q->que[q->num]=x;
	q->num++;
	return 0;
}

int Deque(ArrayIntQueue *q, int *x)
{
	if(q->num<=0)
		return -1;
	int i;
	*x=q->que[0];
	q->num--;
	for(i=0;i<q->num;i++)
	{
		q->que[i]=q->que[i+1];
	}
	return 0;
}

int Capacity(ArrayIntQueue *q)
{
	return (q->max);
}

int ssize(ArrayIntQueue *q)
{
	return (q->num);
}

void Print(ArrayIntQueue *q)
{
	int i;
	for(i=0;i<q->num;i++)
	{
		printf("%d ",q->que[i]);
	}
	printf("\n");
}

void Terminate(ArrayIntQueue *q)
{
	if(q->que!=NULL)
		free(q->que);
	q->max=q->num=0;	
}
