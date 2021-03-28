#include <stdio.h>
int main(void)
{
	int m, n,sum;
	sum = 0;
	for(m = 0;m<=5;m++)
	{
		sum +=m;
		for(n= 'A'+sum;n<='A'+sum+m;n++)
			printf("%c",n);
		printf("\n");
	}
	return 0;
}


