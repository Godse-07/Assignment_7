// 7.	Write program, which outputs all factors and its count. When number is 24 (1,2) (2,3) (3,4) (4,6) (5,8) (6,12) (7,24) will be printed.

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int count = 0;

    printf("Factors of %d and their count:\n", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            printf("(%d,%d) ", i, num / i);
        }
    }
    return 0;
}
