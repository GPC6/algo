#ifndef __Queue
#define __Queue

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int *que;
} Queue;


int Initialize(Queue *q,int max);

int Enque(Queue *q, int x);

int Deque(Queue *q, int *x);

int Peek(Queue *q, int *x);

int Capacity(Queue *q);

int ssize(Queue *q);

void Clear(Queue *q);

int Search2(Queue *q,int x);

void Print(Queue *q);

void Terminate(Queue *q);

#endif
