/*
 * main.c
 *
 *  Created on: May 4, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int main()
{
	char arr[100];
	int i,  count=0;
	printf("enter a string :\n");
	fflush(stdin);   fflush(stdout);
	gets(arr);
	for(i=0;i<sizeof(arr) ; i++)
	{
		if(arr[i]!=0)
		{
			count++;
		}
		else
		{
			break;

		}
	}
	printf("length of string  :%d",count);
	return 0;

}


