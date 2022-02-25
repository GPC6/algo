#include <stdio.h>
#include "IntStack.h"

int main(void)
{
    intstack s;
    if(Initialize(&s,64)==-1)
    {
        printf("���û�������");
        return 1;
    }
    int menu, x;

    while(1)
    {
        printf("���� ������ ��  %d / %d\n",ssize(&s),Capacity(&s));
        printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (5)���� (6)�˻� (7)���� (0)���� : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("Ǫ�õ����� : ");
            scanf("%d",&x);
            if(Push(&s,x)==-1)
            {
                printf("Ǫ�ý���\n");
            }
            break;

        case 2:
            if(Pop(&s,&x)==-1)
            {
                printf("�˽���\n");
            }
            else 
                printf("�˵����� : %d\n",x);
            break;
        case 3:
            if(Peek(&s,&x)==-1)
                printf("�����̺� \n");
            else   
                printf("��ũ������ : %d\n",x);
            break;
        
        case 4:
            Print(&s);
            break;
        case 5:
            Clear(&s);
            break;
        case 6:
            printf("���˻� : ");
            scanf("%d",&x);
            x=Search(&s,x);
            if(x==-1)
                printf("����\n");
            else
                printf("%d�� ����\n",x+1);
            break;
        case 7:
            printf("(1)�ֺ�? (2)����? : ");
            scanf("%d",&x);
            if(x==1)
            {
                    x=IsEmpty(&s);
                    if(x==1)
                        printf("�ֺ�\n");
                    else
                        printf("���ֺ�\n");
            }
            if(x==2)
            {
                x=IsFull(&s);
                if(x==1)
                    printf("����\n");
                else
                    printf("�Ȳ���\n");
            }
        }
        
    }
    Terminate(&s);
    return 0;


}
