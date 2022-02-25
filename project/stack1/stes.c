#include <stdio.h>
#include "IntStack.h"

int main(void)
{
    intstack s;
    if(Initialize(&s,64)==-1)
    {
        printf("스택생성실패");
        return 1;
    }
    int menu, x;

    while(1)
    {
        printf("현재 데이터 수  %d / %d\n",ssize(&s),Capacity(&s));
        printf("(1)푸시 (2)팝 (3)피크 (4)출력 (5)비우기 (6)검색 (7)질문 (0)종료 : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("푸시데이터 : ");
            scanf("%d",&x);
            if(Push(&s,x)==-1)
            {
                printf("푸시실패\n");
            }
            break;

        case 2:
            if(Pop(&s,&x)==-1)
            {
                printf("팝실패\n");
            }
            else 
                printf("팝데이터 : %d\n",x);
            break;
        case 3:
            if(Peek(&s,&x)==-1)
                printf("스택이빔 \n");
            else   
                printf("피크데이터 : %d\n",x);
            break;
        
        case 4:
            Print(&s);
            break;
        case 5:
            Clear(&s);
            break;
        case 6:
            printf("뭐검색 : ");
            scanf("%d",&x);
            x=Search(&s,x);
            if(x==-1)
                printf("없어\n");
            else
                printf("%d에 잇음\n",x+1);
            break;
        case 7:
            printf("(1)텅빔? (2)다참? : ");
            scanf("%d",&x);
            if(x==1)
            {
                    x=IsEmpty(&s);
                    if(x==1)
                        printf("텅빔\n");
                    else
                        printf("안텅빔\n");
            }
            if(x==2)
            {
                x=IsFull(&s);
                if(x==1)
                    printf("꽉참\n");
                else
                    printf("안꽉참\n");
            }
        }
        
    }
    Terminate(&s);
    return 0;


}
