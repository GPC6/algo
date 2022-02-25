#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int Initialize(Queue *q,int max)
{
	q->max=max;
	if((q->que=calloc(max,sizeof(int)))==NULL)
	{
		q->max=0;
		return -1;
	}
	q->front=q->rear=q->num=0;

	return 0;
}

int rEnque(Queue *q, int x)
{
	if(q->num==q->max)
		return -1;
	q->que[q->rear++]=x;
	if(q->rear==q->max)
		q->rear=0;
	q->num++;
	return 0;
}

int fDeque(Queue *q, int *x)
{
	if(q->num==0)
		return -1;
	*x=q->que[q->front];
	q->front++;
	if(q->front==q->max)
		q->front=0;
	q->num--;
	return 0;
}

int fEnque(Queue *q, int x)
{
	if(q->num==q->max)
		return -1;
	q->front--;
	if(q->front==-1)
	{
		q->front=q->max-1;
	}
	q->que[q->front]=x;
	q->num++;
	return 0;
}

int rDeque(Queue *q, int *x)
{
	if(q->num==0)
		return -1;
	*x=q->que[q->rear-1];
	q->rear--;
	if(q->rear==-1)
		q->rear=q->max-1;
	q->num--;
	return 0;
}

int fPeek(Queue *q, int *x)
{
	if(q->num==0)
		return -1;
	*x=q->que[q->front];
	return 0;
}

int rPeek(Queue *q, int *x)
{
	if(q->num==0)
		return -1;
	if(q->rear-1==-1)
		*x=q->que[q->max-1];
	else
		*x=q->que[q->rear-1];
	return 0;
}


int Capacity(Queue *q)
{
	return q->max;
}

int ssize(Queue *q)
{
	return (q->num);
}

void Clear(Queue *q)
{
	q->front=q->rear=q->num=0;
}

int Search2(Queue *q,int x)
{
	int i;
	for(i=0;i<q->num;i++)
	{
		if((q->que[(q->front+i)%q->max])==x)
		{
			return (i+1);
			
		}
	}
	return -1;
}

void Print(Queue *q)
{
	int i;
	for(i=0;i<q->num;i++)
	{
		printf("%d ",q->que[(q->front+i)%q->max]);
	}
	printf("\n");
}

void Terminate(Queue *q)
{
	q->max=q->front=q->rear=q->num=0;
	if(q->que!=NULL)
		free(q->que);
}
