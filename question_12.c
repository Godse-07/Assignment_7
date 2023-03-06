//12.	Write program, which prints the smallest and second smallest factors. If number is 24 then outputs are 2 and 3. If number is 65 then outputs are 5 and 13.

#include<stdio.h>
void main(){
    int a,number,counter=0;
    scanf("%d", &number);
    for (int i = 2; i <= number; i++)
    {
        if(number%i==0){
            a=i;
            printf("%d", a);
            break;
        }
    }
    for (int j = a+1; j <= number; j++)
    {
        if(number%j==0){
            printf("\n %d", j);
            break;
        }
    }
}