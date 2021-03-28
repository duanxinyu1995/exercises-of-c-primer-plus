#include <stdio.h>
int main(void)
{
float k,n;
printf("please input the quato of water:");
scanf("%f",&k);
n= 1/(3.156e-23);
printf("the number of water is:%e\n",k*950*n);
return 0;
}

