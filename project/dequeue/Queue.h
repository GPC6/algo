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

int fEnque(Queue *q, int x);

int fDeque(Queue *q, int *x);

int rEnque(Queue *q, int x);

int rDeque(Queue *q, int *x);

int fPeek(Queue *q, int *x);

int rPeek(Queue *q, int *x);

int Capacity(Queue *q);

int ssize(Queue *q);

void Clear(Queue *q);

int Search2(Queue *q,int x);

void Print(Queue *q);

void Terminate(Queue *q);

#endif
