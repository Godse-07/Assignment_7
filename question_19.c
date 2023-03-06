//19.	Write program, which reads a number and prints all factors using ‘while’ (in place of ‘for’).

#include<stdio.h>
void main(){
    int number,i=2;
    scanf("%d", &number);
    while (i<=number)
    {
        if(number%i==0){
            printf("%d \t", i);
        }
        i++;
    }
}