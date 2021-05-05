/*
 * main.c
 *
 *  Created on: May 1, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int main()
{
	int arr1[2][3];
	int arr2[3][2];
	int i,j;
	printf("entered a matrix to want a transpose\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the elemeent[%d][%d]",i,j);
			fflush(stdin);   fflush(stdout);
			scanf("%d",&arr1[i][j]);


		}
	}
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",arr1[i][j]);
				if(j==2)
				{
					printf("\n");
				}
			}
			printf("\n");
		}
		for(i=0 ;i<2;i++)
		{
			for(j=0 ;j<2;j++)
			{
				arr2[i][j]=arr1[j][i];


			}

		}

		printf("\n");
		for(j=0 ;j<2 ;j++)
		{
			i=2;


			arr2[i][j]=arr1[j][i];

		}
		printf("the transpose matrix\n");
		for(i=0 ;i<2;i++)
		{
			for(j=0 ;j<2;j++)
			{
				printf("%d\t",arr2[i][j]);
					if(j==1)
					{
						printf("\n");
					}


			}

		}

				for(j=0 ;j<2 ;j++)
				{
					i=2;

						printf("%d\t",arr2[i][j]);

				}



	return 0;
}


