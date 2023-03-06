// 5.	Write program to find average factor. I/p 24  o/p 8.429 (59/7)      I/p 25   o/p 15.67  (47/3)

#include <stdio.h>

double average_factor(int num)
{
    int factors_sum = 0;
    int factors_count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            factors_sum += i;
            factors_count++;
        }
    }

    return (double)factors_sum / factors_count;
}

int main()
{
    int num;
    scanf("%d", &num);
    double avg_factor = average_factor(num);
    printf("%.3lf\n", avg_factor); // Output: 8.429 (59/7)

    return 0;
}
