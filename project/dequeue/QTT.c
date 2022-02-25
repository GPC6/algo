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
        printf("(1)�տ��ֱ� (2)�տ����� (3)�ڿ��ֱ� (4)�ڿ����� (5)�տ����� (6)�ڿ����� (7)��� (8)���� (9)�˻� (0)���� : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("��ť ������ : ");
            scanf("%d",&x);
            if(fEnque(&q,x)==-1)
            {
                printf("����\n");
            }
            break;

        case 2:
            if(fDeque(&q,&x)==-1)
            {
                printf("�ֺ�\n");
            }
            else 
                printf("��ť ������ : %d\n",x);
            break;
            
        case 3:
        	printf("��ť ������ : ");
            scanf("%d",&x);
            if(rEnque(&q,x)==-1)
            {
                printf("����\n");
            }
            break;
            
        case 4:
        	if(rDeque(&q,&x)==-1)
            {
                printf("�ֺ�\n");
            }
            else 
                printf("��ť ������ : %d\n",x);
            break;
            
        case 5:
            if(fPeek(&q,&x)==-1)
                printf("�ֺ� \n");
            else   
                printf("��ũ������ : %d\n",x);
            break;
        
        case 6:
        	if(fPeek(&q,&x)==-1)
                printf("�ֺ� \n");
            else   
                printf("��ũ������ : %d\n",x);
            break;
            
        case 7:
            Print(&q);
            break;
        case 8:
            Clear(&q);
            break;
        case 9:
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
