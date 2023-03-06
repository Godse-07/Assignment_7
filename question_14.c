//14.	Write program, which reads a number. Let ‘t’ be its smallest factor. The program finds the smallest factor of t+2. e.g. input 77 output 3 (since smallest factor of 77 is 7 and smallest factor of 7+2 is 3). Input 55 output 7.

#include<stdio.h>
void main(){
    int number,a;
    scanf("%d", &number);
    for (int i = 2; i <= number; i++)
    {
        if(number%i==0){
            a=i;
            break;
        }
    }
    for (int j = 2; j <= a+2; j++)
    {
        if((a+2)%j==0){
            printf("%d", j);
            break;
        }
    }
    
    
}