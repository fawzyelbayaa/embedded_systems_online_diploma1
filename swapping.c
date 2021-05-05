/*
 * main.c
 *
 *  Created on: Apr 26, 2021
 *      Author: fawzy
 */
#include "stdio.h"

void main()
{
	float a , b ,c;
	printf("enter a value one\n");
	fflush(stdin);    fflush(stdout);
	scanf("%f",&a);

	printf("enter a value two\n");
		fflush(stdin);    fflush(stdout);
		scanf("%f",&b);

		c = a;
		a=b;
		b=c;
		printf("after swapping\n");
		printf("the value of a  after swapping is %f\n", a);

		printf("the value of b  after swapping is %f\n", b);



}


