#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num >0)
    {
        printf("����Դϴ�.");
    }
    else if(num < 0)
    {
        printf("�����Դϴ�.");
    }
    else
    {
        printf("0�Դϴ�.");
    }
}