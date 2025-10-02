#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int x=59,input,count=0;

do{

printf("Guess a number:");
scanf("%d",&input);
	
if (input<x)
	printf("high!\n");
else if(input>x)
	printf("low!\n");
	count++;
	}
	
	while(input!=x);
	


printf("Congratulation! trials:%d",count);
return 0;

}


