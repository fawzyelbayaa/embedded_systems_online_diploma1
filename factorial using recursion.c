/*
 * main.c
 *
 *  Created on: Jul 24, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int fact (int num);
int main()
{
	int i ;
	printf("enter an positive integer : ");
	fflush(stdin);     fflush(stdout);
	scanf("%d",&i);


	printf("\nfactorial of %d = %d" ,i, fact(i));
}
int fact(int num)
{
	if(num>=1)
	{
		return num*(fact(num-1));
	}
	else
		return 1;
}


