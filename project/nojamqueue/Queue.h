#ifndef __Queue
#define __Queue

typedef struct {
	int max;
	int num;
	int *que;
} ArrayIntQueue;


int Initialize(ArrayIntQueue *q,int max);

int Enque(ArrayIntQueue *q, int x);

int Deque(ArrayIntQueue *q, int *x);

int Capacity(ArrayIntQueue *q);

int ssize(ArrayIntQueue *q);

void Print(ArrayIntQueue *q);

void Terminate(ArrayIntQueue *q);

#endif
