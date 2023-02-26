//3.	Write program, which prints sum of all factors (input 24 output 2 + 3 + 4 + 6 + 8 + 12 + 24 = 59). Input 35 output 5+7+35=47.

#include<stdio.h>
int main(){
	int number,sum=0;
	scanf("%d", &number);
	for(int i=2;i<=number;i++){
		if(number%i==0){
			sum=sum+i;
		}
	}
	printf("%d", sum);
}