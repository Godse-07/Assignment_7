//11.	Write program, which prints biggest factor other than itself. 

#include<stdio.h>
void main(){
    int number,a;
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        if(number%i==0){
            a=i;
        }
    }
    printf("%d", a);
}