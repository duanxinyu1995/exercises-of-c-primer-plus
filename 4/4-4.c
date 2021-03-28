#include <stdio.h>
int main()
{
	float height;
	char name[10];
	printf("please input your height(cm):\n");
	scanf("%f",&height);
	height = height/100;
	printf("and what's your name:\n");
	scanf("%s", &name);
	printf("%s,you are %f meter tall.\n", name , height);
	return 0 ;
}
