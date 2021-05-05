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
	    char arr2[100];
			int i,  count=0;
			int j=0;
			printf("enter the string :\n");
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

			for(i=count-1 ;i>=0 ;i--)
			{
				arr2[i]=arr[j];
				j++;

			}
			arr2[count]=0;
			printf("%s",arr2);




	return 0;
}


