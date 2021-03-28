#include <stdio.h>
#include <string.h>
int main()
{
	char name1[10],name2[10];
	printf("please input the first part of your name:\n");
	scanf("%s",&name1);
	printf("and what's the second part:\n");
	scanf("%s", &name2);
	printf("%s %s\n", name2, name1);
	printf("%-*d %-*d\n", strlen(name2),strlen(name2),strlen(name1),strlen(name1));
	printf("%s %s\n", name2, name1);
	printf("%*d %*d\n", strlen(name2),strlen(name2),strlen(name1), strlen(name1));
	return 0 ;
}
