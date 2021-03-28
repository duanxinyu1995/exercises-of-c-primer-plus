#include <stdio.h>
#define FEET 30.48
#define INCH 2.54
int main(void)
{
	float cm, inches;
	int feet;
	printf("Enter a height in centimeters:\n");
	scanf("%f", &cm);
	while(cm>0){
	feet = cm/FEET;
	inches =(cm -(int)feet*FEET)/INCH;
	printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
	printf("enter a height in centimeters (<=0 to quite):\n");
	scanf("%f", &cm);
}
	printf("bye\n");
	return 0;
}
