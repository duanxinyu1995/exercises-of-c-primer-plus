#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int N=0, n=0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
		{
			if(islower(ch));
				n++;
			if(isupper(ch));
				N++;
		}
	}
	printf("the number of upper is :%d\n", N);
	printf("the number of lower is:%d\n", n);
	return 0;
}