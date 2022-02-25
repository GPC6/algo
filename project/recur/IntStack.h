#ifndef ___IntStack
#define ___IntStack

typedef struct {
    int max;
    int ptr;
    int *stk;
} intstack;

int Initialize(intstack *s, int max);

int Push(intstack *s, int x);

int Pop(intstack *s, int *x);

int Peek(intstack *s, int *x);

void Clear(intstack *s);

int Capacity(const intstack *s);

int ssize(const intstack *s);

int IsEmpty(const intstack *s);

int IsFull(const intstack *s);

int Search(const intstack *s,int x);

void Print(const intstack *s);

void Terminate(intstack *s);

#endif