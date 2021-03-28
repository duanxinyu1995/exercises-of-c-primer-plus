#include <stdio.h>
int main(viod)
{
	int ch,n=0;
	while ((ch = getchar()) != EOF)
		n++;
	printf("the number of letters is %d\n", n);
	return 0;
}