// 10.	Write program, which reads a number and prints “yes” if the given number is prime. If the given number is not a prime then “no” is printed. (Use the program to find smallest factor. The smallest factor of a prime number is equal to itself).

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int is_prime = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            printf("no\n");
            break;
        }
    }

    if (is_prime)
    {
        printf("yes\n");
    }

    return 0;
}
