#include <stdio.h>
int power(int n);
int main(void)
{
	float sum1,n,sum2;
	int time;
	printf("Enter the times of calculate you want:\n");
	scanf("%d", &time);
	while(time>0){
		for(n=1,sum1=0;n<=time;n++)
			sum1=sum1 + 1/n;
		for(n=1,sum2=0;n<=time;n++)
			sum2=sum2+ power(n-1)*1/n;
		printf("the sum1=\n%f,sum2 =\n%f\n",sum1,sum2);
		printf("Enter next times of calculate you want(time>0):\n");
		scanf("%d", &time);
	}
	printf("Done\n");
	return 0;
}
int power(int n)
{
	int i;
	while(n%2==0)
		i=1;
	while(n%2!=0)
		i=-1;
	return i;
}
