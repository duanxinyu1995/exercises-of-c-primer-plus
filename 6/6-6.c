#include <stdio.h>
int square(int n);
int cube(int n);
int main(void)
{
	int min, max,n;
	printf("please enter the min number:");
	scanf("%d",&min);
	printf("and enter the max number:");
	scanf("%d",&max);
	printf("         n       n^2       n^3\n");
	for(n=min;n<=max;n++){
		printf("%10d",n);
		printf("%10d",square(n));
		printf("%10d",cube(n));
		printf("\n");
	}
	return 0;
}
int square(int n)
{
	int n2;
	n2=n*n;
	return n2;
}
int cube(int n)
{
	int n3;
	n3=n*n*n;
	return n3;
}
