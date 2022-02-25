#include <stdio.h>
#include "Queue.h"

int main(void)
{
    ArrayIntQueue q;
    if(Initialize(&q,6)==-1)
    {
        printf("ť ��������");
        return 1;
    }
    int menu, x;

    while(1)
    {
    	printf("\n");
        printf("���� ������ ��  %d / %d\n",ssize(&q),Capacity(&q));
        printf("(1)��ť (2)��ť (3)��� (0)���� : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("��ť������ : ");
            scanf("%d",&x);
            if(Enque(&q,x)==-1)
            {
                printf("��á���Ӹ�\n");
            }
            break;

        case 2:
            if(Deque(&q,&x)==-1)
            {
                printf("������Ӹ�\n");
            }
            else 
                printf("��ť ������ : %d\n",x);
            break;
        case 3:
            Print(&q);
            break;
    	}
        
    }
    Terminate(&q);
    return 0;


}
