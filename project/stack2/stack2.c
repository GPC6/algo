#include <stdio.h>
#include "IntStack2.h"

int main(void)
{
    intstack2 s;
    if(Initialize(&s,64)==-1)
    {
        printf("���û�������");
        return 1;
    }
    int menu, x,c;

    while(1)
    {
        printf("\n���� ������ �� A : %d / %d    B : %d / %d\n",ssize(&s,1),Capacity(&s),ssize(&s,2),Capacity(&s));     
        do{
        printf("���� ���� (1)A (2)B  : ");
        scanf("%d",&c);
		}while(c != 1 && c != 2);
        printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (5)���� (6)�˻� (7)���� (0)���� : ");
        scanf("%d",&menu);

        if(menu==0)
            break;

        switch (menu)
        {
        case 1:
            printf("Ǫ�õ����� : ");
            scanf("%d",&x);
            if(Push(&s,c,x)==-1)
            {
                printf("Ǫ�ý���\n");
            }
            break;

        case 2:
            if(Pop(&s,c,&x)==-1)
            {
                printf("�˽���\n");
            }
            else 
                printf("�˵����� : %d\n",x);
            break;
        case 3:
            if(Peek(&s,c,&x)==-1)
                printf("�����̺� \n");
            else   
                printf("��ũ������ : %d\n",x);
            break;
        
        case 4:
            Print(&s,c);
            break;
        case 5:
            Clear(&s,c);
            break;
        case 6:
            printf("���˻� : ");
            scanf("%d",&x);
            x=Search(&s,c,x);
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
                    x=IsEmpty(&s,c);
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
