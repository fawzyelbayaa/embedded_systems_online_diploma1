/*
 * main.c
 *
 *  Created on: Apr 30, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int main()
{
	float arr[6];
	int i;
	float average=0;

	for(i=0;i<6;i++)
	{
		printf("enter the number %d:\n",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%f",&arr[i]);
		average += arr[i];
	}
	printf("average is %0.2f\n",average/6);
	return 0;
}


