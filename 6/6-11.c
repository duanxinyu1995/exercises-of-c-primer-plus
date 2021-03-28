#include <stdio.h>
int main(void)
{
	int n[8],i;
	printf("Enter 8 number:\n");
	for(i=0;i<8;i++)
		scanf("%d",&n[i]);
	for(i=7;i>=0;i--)
		printf("%d ",n[i]);
	printf("\n");
	return 0;
}
