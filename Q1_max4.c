#include <stdio.h>

int main()
{
    int a, b, c, d;
    int max;
    
    printf("���� �Է��ϼ���\n");
    printf("a�� �� :");
    scanf("%d",&a);
    printf("b�� �� :");
    scanf("%d",&b);
    printf("c�� �� :");
    scanf("%d",&c);
    printf("d�� �� :");
    scanf("%d",&d);

    max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    if(d > max)
    {
        max = d;
    }
    printf("�ִ��� %d�Դϴ�",max);
}