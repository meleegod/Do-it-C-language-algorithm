// #include <stdio.h>
// #include <stdlib.h>

// int maxof(const int a[], int n)
// {
//     int i;
//     int max = a[0];
//     for(i = 1; i< n; i++)
//     {
//         if(a[i] > max) max = a[i];
//     }
//     return max;
// }

// int main()
// {
//     int i;
//     int *height;
//     int number;
//     printf("��� �� : ");
//     scanf("%d", &number);
//     height = calloc(number, sizeof(int));
//     printf("%d ����� Ű�� �Է��ϼ���.\n", number);
//     for(i = 0; i < number; i++)
//     {
//         printf("height[%d] : ", i);
//         scanf("%d", &height[i]);
//     }
//     printf("�ִ��� %d�Դϴ�.\n", maxof(height,number));
//     free(height);

//     return 0;
// }