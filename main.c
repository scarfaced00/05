#include <stdio.h>
#include <stdlib.h>

/* ex2 */

int main(int argc, char *argv[]) {
	
	int num;
	printf("정수 하나를 입력하시오 :");
	scanf("%d",&num);
	
	if(num>0)
		printf("절대값은 %d 입니다.",num);
	else if(num<0)
		printf("절대값은 %d 입니다.",-num);
	else
		printf("절대값은 %d 입니다.",num); 
	return 0;
}
