#include <stdio.h>
int main(void)
{
	int days, weeks, lefts;
	printf("please input the number of days:\n");
	scanf("%d", &days);
	while(days >0){
	weeks = days/7;
	lefts = days%7;
	printf("%d days are %d weeks, %d days.\n", days, weeks, lefts);
	printf("what's the next number:\n");
	scanf("%d", &days);
}
	printf("this is not a  existant number of days, that's all thank you!\n");
	return 0;
}
