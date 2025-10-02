#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("정수 하나 를 입력하세요:");
	scanf("%d",&i);
	if (i>=0){
			printf("절댓값은 %d입니다.",i);
	}

	else{
		printf("절댓값은 %d입니다.",-i);

	}
	
}

