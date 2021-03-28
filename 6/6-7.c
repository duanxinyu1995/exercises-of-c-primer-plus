#include <stdio.h>
#include <string.h>
int main(void)
{
	int n ,m;
	char word[20];
	printf("please enter the word:");
	for(n=0;n<20;n++){
		scanf("%c",&word[n]);
		while(word[n] == '\n')
			n=20;
	}
	printf("the word are as fllow:");
	m = strlen(word);
	for(n = m;n>=0;n--)
		printf("%c",word[n]);
	printf("\n");
	return 0;
}

