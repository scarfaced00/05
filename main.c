#include <stdio.h>
#include <stdlib.h>

/* ex2 */

int main(int argc, char *argv[]) {
	
	int num;
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%d",&num);
	
	if(num>0)
		printf("���밪�� %d �Դϴ�.",num);
	else if(num<0)
		printf("���밪�� %d �Դϴ�.",-num);
	else
		printf("���밪�� %d �Դϴ�.",num); 
	return 0;
}
