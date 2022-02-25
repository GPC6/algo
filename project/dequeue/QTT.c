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
        printf("(1)앞에넣기 (2)앞에빼기 (3)뒤에넣기 (4)뒤에뺴기 (5)앞에보기 (6)뒤에보기 (7)출력 (8)비우기 (9)검색 (0)종료 : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("인큐 데이터 : ");
            scanf("%d",&x);
            if(fEnque(&q,x)==-1)
            {
                printf("꽉참\n");
            }
            break;

        case 2:
            if(fDeque(&q,&x)==-1)
            {
                printf("텅빔\n");
            }
            else 
                printf("디큐 데이터 : %d\n",x);
            break;
            
        case 3:
        	printf("인큐 데이터 : ");
            scanf("%d",&x);
            if(rEnque(&q,x)==-1)
            {
                printf("꽉참\n");
            }
            break;
            
        case 4:
        	if(rDeque(&q,&x)==-1)
            {
                printf("텅빔\n");
            }
            else 
                printf("디큐 데이터 : %d\n",x);
            break;
            
        case 5:
            if(fPeek(&q,&x)==-1)
                printf("텅빔 \n");
            else   
                printf("피크데이터 : %d\n",x);
            break;
        
        case 6:
        	if(fPeek(&q,&x)==-1)
                printf("텅빔 \n");
            else   
                printf("피크데이터 : %d\n",x);
            break;
            
        case 7:
            Print(&q);
            break;
        case 8:
            Clear(&q);
            break;
        case 9:
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
