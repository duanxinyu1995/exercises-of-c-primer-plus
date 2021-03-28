#include <stdio.h>
int main(void)
{
	float f[2] ;
	int status,n;
	printf("please enter the tow numbers:");
	for(n=0;n<2;n++)
		status = scanf("%f",&f[n]);
	while(status ==1)
	{
		printf("%f\n", (f[1]-f[0])/(f[1]*f[0]));
		printf("and what's the next two:");
		for(n=0;n<2;n++)
			status=scanf("%f",&f[n]);

	}
	return 0;
}
