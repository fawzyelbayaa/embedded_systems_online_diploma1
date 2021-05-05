/*
 * main.c
 *
 *  Created on: Apr 27, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int main()
{
	int i,x;
	int sum=0;
	printf("enter a number \n");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&x);
	for(i=1 ; i<=x ;i++ )
	{
		sum += i;

	}
	printf("the sum is %d",sum);
}


