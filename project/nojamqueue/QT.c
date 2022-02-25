#include <stdio.h>
#include "Queue.h"

int main(void)
{
    ArrayIntQueue q;
    if(Initialize(&q,6)==-1)
    {
        printf("큐 생성실패");
        return 1;
    }
    int menu, x;

    while(1)
    {
    	printf("\n");
        printf("현재 데이터 수  %d / %d\n",ssize(&q),Capacity(&q));
        printf("(1)인큐 (2)디큐 (3)출력 (0)종료 : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("인큐데이터 : ");
            scanf("%d",&x);
            if(Enque(&q,x)==-1)
            {
                printf("다찼어임마\n");
            }
            break;

        case 2:
            if(Deque(&q,&x)==-1)
            {
                printf("비었어임마\n");
            }
            else 
                printf("디큐 데이터 : %d\n",x);
            break;
        case 3:
            Print(&q);
            break;
    	}
        
    }
    Terminate(&q);
    return 0;


}
