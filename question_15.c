//15.	Write program, which reads two numbers and prints all common factors. If given numbers are 24 and 54 then outputs are 2, 3 and 6.

#include<stdio.h>
void main(){
    int number1,number2,i,j;
    scanf("%d %d", &number1, &number2);
    for (i=2,j=2; i <=number1,j<=number2; i++,j++)
    {
        if(number1%i==0 && number2%j==0){
            if(i==j){
                printf("%d \t", i);
            }
        }
    }
    
}