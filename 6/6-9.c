#include <stdio.h>
float calculate(float n,float n1);
int main(void)
{
	float f[2] ;
	int status,n;
	printf("please enter the tow numbers:");
	for(n=0;n<2;n++)
		status = scanf("%f",&f[n]);
	while(status ==1)
	{
		printf("%f\n", calculate(f[0],f[1]));
		printf("and what's the next two:");
		for(n=0;n<2;n++)
			status=scanf("%f",&f[n]);

	}
	return 0;
}
float calculate(float n, float n1)
{
	float n2;
	n2 = (n1-n)/(n1*n);
	return n2;
}
