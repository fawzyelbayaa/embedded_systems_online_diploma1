/*
 * main.c
 *
 *  Created on: May 3, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int main()
{
	int arr_search[5];
	int i,size;
	int search;
	printf("enter number of element :\n");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&size);

	for(i=0 ;i<size;i++)
	{
		printf("enter the element[%d]\n",i);
		fflush(stdin);   fflush(stdout);
		scanf("%d",&arr_search[i]);
	}
	for(i=0 ;i<size;i++)
	{
		printf("%d\t",arr_search[i]);

	}
	printf("\n");
	printf("enter to element to be searched\n");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&search);
	for(i=0 ;i<5;i++)
	{
		if(search==arr_search[i])
		{
			printf("number found at the location = %d",i+1);
		}
	}


	return 0;
}


