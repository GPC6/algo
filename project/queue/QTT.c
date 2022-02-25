#include <stdio.h>
#include "Queue.h"

int main(void)
{
    Queue q;
    if(Initialize(&q,6)==-1)
    {
        printf("ť ��������");
        return 1;
    }
    int menu, x;

    while(1)
    {
        printf("\n���� ������ ��  %d / %d\n",ssize(&q),Capacity(&q));
        printf("(1)��ť (2)��ť (3)��ũ (4)��� (5)���� (6)�˻� (0)���� : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("��ť ������ : ");
            scanf("%d",&x);
            if(Enque(&q,x)==-1)
            {
                printf("����\n");
            }
            break;

        case 2:
            if(Deque(&q,&x)==-1)
            {
                printf("�ֺ�\n");
            }
            else 
                printf("��ť ������ : %d\n",x);
            break;
        case 3:
            if(Peek(&q,&x)==-1)
                printf("�ֺ� \n");
            else   
                printf("��ũ������ : %d\n",x);
            break;
        
        case 4:
            Print(&q);
            break;
        case 5:
            Clear(&q);
            break;
        case 6:
            printf("���˻� : ");
            scanf("%d",&x);
            x=Search2(&q,x);
            if(x==-1)
                printf("����\n");
            else
                printf("%d��°�� ����\n",x);
            break;
 
        }
        
    }
    Terminate(&q);
    return 0;


}
