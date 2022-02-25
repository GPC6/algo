#ifndef ___IntStack2
#define ___IntStack2

typedef struct {
    int max;
    int ptra;
    int ptrb;
    int *stk;
} intstack2;

int Initialize(intstack2 *s, int max);

int Push(intstack2 *s,int c, int x);

int Pop(intstack2 *s,int c, int *x);

int Peek(intstack2 *s,int c, int *x);

void Clear(intstack2 *s, int c);

int Capacity(const intstack2 *s);

int ssize(const intstack2 *s,int c);

int IsEmpty(const intstack2 *s,int c);

int IsFull(const intstack2 *s);

int Search(const intstack2 *s,int c,int x);

void Print(const intstack2 *s,int c);

void Terminate(intstack2 *s);

#endif
