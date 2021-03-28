#include <stdio.h>
int main()
{
	float velocity, time, ram;
	printf("please input the velocity:(Mb/s)\n");
	scanf("%f", &velocity);
	printf("and what is the number of ram:(MB)\n");
	scanf("%f", &ram);
	time = ram*8/velocity;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",velocity, ram);
	printf("downloads in %.2f seconds.\n", time);
	return 0 ;
}

