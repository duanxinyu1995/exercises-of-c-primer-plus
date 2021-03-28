#include <stdio.h>
int main(void)
{
	int m, n,sum;
	char c;
	printf("please enter the letter you want(A~Z):\n");
	scanf("%c",&c);
	sum = c-'A';
	for(m = 0;m<=sum;m++)
	{
		for(n =0;n<sum-m;n++)
			printf(" ");
		for(n= 'A';n<='A'+m;n++)
			printf("%c",n);
		for(n = 'A'+m-1;n>='A';n--)
			printf("%c",n);
		for(n = 0;n<sum-m;n++)
			printf(" ");
		printf("\n");
	}
	return 0;
}


