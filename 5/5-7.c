#include <stdio.h>
double calculate(double n);
int main(void)
{
	double j , j3;
	printf("please input a number:\n");
	scanf("%f", &j);
	j3=calculate(j);
	printf("it's cubic power is :%f.\n",j3);
	return 0;
}
double calculate(double n)
{
	double n3;
	n3 = n*n*n;
	printf("%f", n3);
	return n3;
}

