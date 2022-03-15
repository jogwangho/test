#include <stdio.h>

int main(void) {
	int inumber = 0;
	int result = 0;
	int i;

	for (i = 0; i < 6; i++)
	{
	scanf("% d", inumber);
	result += inumber;
	
	}
	printf("%d", result);

}