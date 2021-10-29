/*
 * main.c
 *
 *  Created on: Oct 29, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int count_string(char *p)
{
	int count =0;
	while(*p)
	{
		count++;
		p++;

	}
	return count;
}
int main()
{
	char x[50];
	printf("enter string to count it\n");
	gets(x);

	int count_main=count_string(x);
	printf("%d",count_main);


	return 0;
}


