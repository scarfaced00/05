#include <stdio.h>
#include <stdlib.h>

/* ex3 */

int main(int argc, char *argv[]) {

	int cnt = 0;
	char c;
	printf("Input a string:");
	while ((c = getchar()) != '\n')
	{
		if (48 <= c && c <= 57)
			cnt++;
	}

	printf("the number of digits is %d", cnt);

	return 0;
}
