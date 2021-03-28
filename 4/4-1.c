#include <stdio.h>
int main()
{
	char name1[10],name2[10];
	printf("please input the first part of your name:\n");
	scanf("%s",&name1);
	printf("and what's the second part:\n");
	scanf("%s", &name2);
	printf("your name is %s,%s.\n", name2, name1);
	return 0 ;
}

