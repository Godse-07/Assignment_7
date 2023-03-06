// 17.	Modify the above program to print the smallest common factor. Input 24, 15 output 3.

#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int larger = num1;
    if (num2 > num1)
    {
        larger = num2;
    }

    int smallest_factor = -1;
    for (int i = 2; i <= larger; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            smallest_factor = i;
            break;
        }
    }

    if (smallest_factor == -1)
    {
        printf("No common factors found\n");
    }
    else
    {
        printf(" %d ", smallest_factor);
    }

    return 0;
}
