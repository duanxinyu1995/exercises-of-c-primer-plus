#include <stdio.h>
int square(int n);
int main(void)
{
	int n,integer[2],sum;
	printf("Enter lower and upper integer limits:");
	for(n=0;n<2;n++)
		scanf("%d",&integer[n]);
	while(integer[1]>integer[0]){
	for(n=integer[0],sum=0;n<=integer[1];n++){
		sum =sum+square(n);
		printf("%d\n",sum);}
	printf("The sums of the squares from %d to %d is %d\n",square(integer[0]),square(integer[1]),sum);
	printf("Enter next set of limits:");
	for(n= 0;n<2;n++)
		scanf("%d",&integer[n]);
	}
	return 0;
}
int square(int n)
{
	n = n*n;
	return n;
}
