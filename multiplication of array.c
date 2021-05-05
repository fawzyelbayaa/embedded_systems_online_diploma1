/*
 * main.c
 *
 *  Created on: Apr 30, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int main()
{
	float x1[2][2];
	float x2[2][2];
	float c [2][2];
	int i,j;
	printf("enter the element of matrix1\n");
	for(i=0;i<2;i++)
	{
		for (j=0 ;j<2 ;j++)
		{
			printf("enter x1[%d][%d]\n",i,j);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&x1[i][j]);
		}
	}
	printf("enter the element of matrix2\n");
	for(i=0;i<2;i++)
	{
			for (j=0 ;j<2 ;j++)
			{
				printf("enter x2[%d][%d]\n",i,j);
				fflush(stdin);  fflush(stdout);
				scanf("%f",&x2[i][j]);

			}
	}
	printf("enter the sum matrix\n");
	for(i=0;i<2;i++)
	{
				for (j=0 ;j<2 ;j++)
				{
					c[i][j]=x1[i][j]+x2[i][j];
					printf("the sum is %0.2f\t",c[i][j]);
					if(j==1)
					{
						printf("\n");
					}
				}


	}
	return 0;



}


