//2.	Write program, which will output all factors by exchanging last two digits. Input 385 output 50 70 11 53 55 77 358.

#include<stdio.h>
void main(){
	int number,rev,a;
	scanf("%d", &number);
	for(int i=2;i<=number;i++){
		if(number%i==0){
            a=i;
            rev=0;
            if(a<10){
                printf("%d \t", a*10);
            }
            else if(100>a && a>10){
			while (a!=0)
            {
                rev=rev*10+(a%10);
                a/=10;
            }
            printf("%d \t", rev);
            }
            else{
                int b=a/100;
                a=a%100;
                
                while ((a)!=0)
                {
                    rev=rev*10+(a%10);
                    a/=10;
                }
                printf("%d", rev+(b*100));
            }
		}
	}
}