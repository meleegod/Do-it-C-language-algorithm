#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num >0)
    {
        printf("양수입니다.");
    }
    else if(num < 0)
    {
        printf("음수입니다.");
    }
    else
    {
        printf("0입니다.");
    }
}