#include <stdio.h>

int main()
{
    int a, b, c, d;
    int max;
    
    printf("값을 입력하세요\n");
    printf("a의 값 :");
    scanf("%d",&a);
    printf("b의 값 :");
    scanf("%d",&b);
    printf("c의 값 :");
    scanf("%d",&c);
    printf("d의 값 :");
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
    printf("최댓값은 %d입니다",max);
}