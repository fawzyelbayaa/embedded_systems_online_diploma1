/*
 * main.c
 *
 *  Created on: May 3, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int main()
{

	int arr1[6];
	int arr2[6];
	int i,c,L;

	for(i=0;i<5;i++)
	{
		printf("enter elenment[%d]\n",i);
		fflush(stdin);   fflush(stdout);

		scanf("%d",&arr1[i]);
	}
	printf("the element\n");
	for(i=0 ;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(i=0 ;i<5;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("enter the element to be inserted\n ");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&c);

	printf("enter the location\n ");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&L);

	arr2[L-1]=c;
	for(i=L;i<6;i++)
	{
		arr2[L]=arr1[L-1];
		L++;
	}
	for(i=0 ;i<6 ;i++)
	{
		printf("%d\t",arr2[i]);
	}
	return 0;
}


