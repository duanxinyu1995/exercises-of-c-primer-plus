#include <stdio.h>
int main(void)
{
	int count, sum, days, i;

	i = 0;
	sum = 0;
	printf("please input the total days making money:\n");
	scanf("%d", &days);
	while(i++ <days){
		count = i*i;
		sum = sum +count;
}
	printf("sum = %d\n", sum);
	return 0;

}

