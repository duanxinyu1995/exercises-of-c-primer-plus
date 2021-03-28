#include <stdio.h>
#define M_PER_H 60
int main(void)
{
	int m;
	float h;
	printf("please input the minutes:\n");
	scanf("%d", &m);
	while(m>0){
	h = m/M_PER_H;
	printf("the corresponding hours is :%.2f.\n",h);
	printf("what's the next number of minutes:\n");
	scanf("%d", &m);
}
	printf("that's all, thank you!\n");
	return 0;
}

