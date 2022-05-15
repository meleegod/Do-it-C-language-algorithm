#include <stdio.h>

int main()
{
    int a, b, c, d;
    int min;
    
    printf("값을 입력하세요\n");
    printf("a의 값 :");
    scanf("%d",&a);
    printf("b의 값 :");
    scanf("%d",&b);
    printf("c의 값 :");
    scanf("%d",&c);
    printf("d의 값 :");
    scanf("%d",&d);

    min = a;
    if(b < min)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    }
    if(d < min)
    {
        min = d;
    }
    printf("최솟값은 %d입니다",min);
}