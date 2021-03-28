#include <stdio.h>
#define GL 3.785
#define MK 1.609
int main()
{
	float gallons, miles,l,km,mg,lkm;
	printf("please input the gallons:\n");
	scanf("%f",&gallons);
	printf("and how many is the miles:\n");
	scanf("%f",&miles);
	mg = miles/gallons;
	l =gallons*GL;
	km = miles*MK;
	lkm = l/km*100;
	printf("it's %.1f miles per gallons\n",mg);
	printf("it's %.1f l per 100km\n",lkm);
	return 0 ;
}
