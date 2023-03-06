//6.	Write program, which reads a number and prints “yes” if the given number is prime. If the given number is not a prime then “no” is printed. (Hint: Use above program. A prime number has only one factor). Input 24 output “no”. Input 13 output “yes”.

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
    if(counter==1){
        printf("The number is a prime number");
    }
    else{
        printf("The number is not a prime number");
    }
    
}