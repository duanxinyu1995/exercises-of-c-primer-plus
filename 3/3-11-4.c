#include <stdio.h>
int main(void)
{
int f;
printf("Enter a floating-point value:");
scanf("%f", &f);
printf("fixed-point notation:%f\n",f);
printf("exponential notation:%e\n",f);
printf("p notation:%p\n",f);
return 0;
}

