//18.	Write program, which reads two numbers and finds the least common multiplier. e.g. input 24 and 54 then output is 216. [Do not use the method of (a*b/gcd(a,b)).] [Hint: modify above program by replacing x%i by i%x] 


#include <stdio.h>
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}


int main()
{
	int a  , b;
    scanf("%d %d", &a, &b);
	printf(" %d ", lcm(a, b));
	return 0;
}

