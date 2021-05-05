/*
 * main.c
 *
 *  Created on: Apr 27, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int main()
{
	char c;
	while(1){
	printf("enter a char to check : \n");
	fflush(stdout);    fflush(stdin);
	scanf("%c",&c);

	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("%c is alphabet\n",c);

	}
	else
		{
		printf("%c is not alphabet\n",c);

		}

	}

	return 0;


}


