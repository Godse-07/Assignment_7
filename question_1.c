//1.	Write a program, which will print last digits of all factors. Input 385 output 5 7 1 5 5 7 5.

#include<stdio.h>
int main(){
	int number;
	scanf("%d", &number);
	for(int i=2;i<=number/2;i++){
		if(number%i==0){
			printf("%d \t", i%10);
		}
	}
}