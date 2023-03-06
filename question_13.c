//13.	Write program, which reads two numbers and finds the sum of smallest factors. e.g. input number 35 and 21 output 5+3=8.

#include<stdio.h>
void main(){
    int number1,number2,sum=0,a,b;
    scanf("%d", &number1);
    scanf("%d", &number2);
    for (int i = 2; i <= number1; i++)
    {
        if(number1%i==0){
             a=i;
             break;
        }
    }
    for (int j = 2; j <= number2; j++)
    {
        if(number2%j==0){
             b=j;
             break;
        }
    }
    sum=a+b;
    printf("%d", sum);
}