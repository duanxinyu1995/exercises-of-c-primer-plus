#include <stdio.h>
int main(void)
{
	int m, n;
	for(m = 1;m<=6;m++)
	{
		for(n= 'F';n>'F'-m;n--)
			printf("%c",n);
		printf("\n");
	}
	return 0;
}

