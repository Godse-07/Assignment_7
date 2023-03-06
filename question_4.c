//4.	Write program, to find the number of factors. Input 24 output 7. Input 35 output 3.

#include<stdio.h>
void main(){
    int number,counter=0;
    scanf("%d", &number);
    for (int i = 2; i <= number; i++)
    {
        if(number%i==0){
            counter++;
        }
    }
    printf("%d", counter);
    
}