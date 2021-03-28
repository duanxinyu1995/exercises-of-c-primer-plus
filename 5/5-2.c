#include <stdio.h>
int main(void)
{
	int m,n;
	printf("please input the number you want:\n");
	scanf("%d", &m);
	n = m+10;
	while(m<n+1){
	printf("%d\n", m++);

}
	return 0;
}
