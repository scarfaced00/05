#include <stdio.h>
#include <stdlib.h>

/* ex1 */

int main(int argc, char *argv[]) {
	
	int num;
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%d",&num);
	
	if(num>0)
		printf("����Դϴ�.");
	else if(num<0)
		printf("�����Դϴ�.");
	else
		printf("0�Դϴ�."); 
	return 0;
}
