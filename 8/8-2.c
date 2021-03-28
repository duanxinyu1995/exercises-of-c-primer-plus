#include <stdio.h>
int main(void)
{
	char ch;
	int n=0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= ' ')
		{
			printf("%c--%d ", ch, ch);
			n++;
		}
		else if (ch == '\n')
		{
			printf("--\\n");
			n++;
		}

		else if (ch == '\t')
		{
			printf("--\\t");
			n++;
		}
		else
		{
			printf("--%d", ch);
			n++;
		}
		//while (n = 10)
		//{
			printf("\n");
		//	n = 0;
		//}
	}
	return 0;
}
