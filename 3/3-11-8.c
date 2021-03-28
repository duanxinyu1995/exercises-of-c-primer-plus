#include <stdio.h>
int main(void)
{
float glass,ounce,soup,tea;
float pint;
printf("please input the number of glass:_\b");
scanf("%f",&glass);
pint = glass/2;
ounce = glass*8;
soup = ounce *2;
tea = soup*3;
printf("It is equal to %f pint\n",pint);
printf("It is equal to %f ounce\n",ounce);
printf("It is equal to %f soup spoons\n",soup);
printf("It is equal to %f tea spoons\n",tea);
return 0;
}

