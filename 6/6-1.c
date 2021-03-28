#include <stdio.h>
int main(void)
{
	char letters[26];
	int index;
	printf("enter the 26 letters:\n");
	for(index = 0;index<26;index++)
		scanf("%c",&letters[index]);
	printf("letters are as follow:\n");
	for(index = 0;index<26;index++){
		printf("%c ", letters[index]);
		while(index ==25){
			printf("\n");
			index = 26;}
	}
	return 0;
}
