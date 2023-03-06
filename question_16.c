//16.	Modify the above program to print the greatest common factor. Input 24 35 output 1. Input 42, 54 output 6.

#include <stdio.h>

int main() {
    int num1, num2; 
    scanf("%d %d", &num1, &num2);

    int smaller = num1;
    if (num2 < num1) {
        smaller = num2;
    }

    int gcf = 1; 
        for (int i = 2; i <= smaller; i++) {
        if (num1 % i == 0 && num2 % i == 0) { 
            gcf = i; 
        }
    }

    printf(" %d", gcf);

    return 0;
}
