//8.	Write program, which reads another integer k and prints the kth factor. If given number is 24 and k is 5 then output is 8.

#include<stdio.h>
void main(){
    int number,n,counter=0;
    scanf("%d", &number);
    scanf("%d", &n);
    for (int i = 2; i <= number; i++)
    {
        if(number%i==0){
            counter++;
            if(counter==n){
                printf("%d", i);
                break;
            }
        }
    }
    
}