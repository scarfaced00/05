#include <stdio.h>
#include <stdlib.h>

/* ex4 */

int main(int argc, char *argv[]) {

	int num;
	int sum=0;
	int i;
	
	printf("Input a number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
    printf("The result is %d",sum);
    
	return 0;
}
