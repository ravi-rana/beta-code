/*******************************************
* File Name : do_while.c
* Purpose : Better to be a geek than an idiot
* Creation Date : 29-08-2016
* Last Modified : Mon Aug 29 21:36:29 2016
* Created By : RB(https://github.com/bharose)
********************************************/

#include <stdio.h>
#include <string.h>
int main()
{
	char name[20];
	printf("Hey, what is your hobby ?\n");
	do {
		scanf("%s", name);
		if(strcmp(name, "coder") == 0){
		       printf("Really ?, u think u are coder :(\n");
		       break;
		}else {
			printf("nice keep it up\n");
		}
	}while(1);
	return 0;
}