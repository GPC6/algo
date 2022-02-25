#include <stdio.h>
#include "Queue.h"

int main(void)
{
    Queue q;
    if(Initialize(&q,6)==-1)
    {
        printf("큐 생성실패");
        return 1;
    }
    int menu, x;

    while(1)
    {
        printf("\n현재 데이터 수  %d / %d\n",ssize(&q),Capacity(&q));
        printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (5)비우기 (6)검색 (0)종료 : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("인큐 데이터 : ");
            scanf("%d",&x);
            if(Enque(&q,x)==-1)
            {
                printf("꽉참\n");
            }
            break;

        case 2:
            if(Deque(&q,&x)==-1)
            {
                printf("텅빔\n");
            }
            else 
                printf("디큐 데이터 : %d\n",x);
            break;
        case 3:
            if(Peek(&q,&x)==-1)
                printf("텅빔 \n");
            else   
                printf("피크데이터 : %d\n",x);
            break;
        
        case 4:
            Print(&q);
            break;
        case 5:
            Clear(&q);
            break;
        case 6:
            printf("뭐검색 : ");
            scanf("%d",&x);
            x=Search2(&q,x);
            if(x==-1)
                printf("없어\n");
            else
                printf("%d번째에 있음\n",x);
            break;
 
        }
        
    }
    Terminate(&q);
    return 0;


}
