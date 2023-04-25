#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char *ptr=(char*) malloc(2);
	*ptr='s';
	printf("%c %d \n", *ptr,ptr);
	ptr++;
	*ptr='a';
	printf("%c %d", *ptr,ptr);
}
