/*
 * main.c
 *
 *  Created on: Jul 24, 2021
 *      Author: fawzy
 */
#include "stdio.h"
char text[20];  char rev[20];
int i,j;
void reverse();
int main()
{

	printf("enter a sentence :");
	fflush(stdin);   fflush(stdout);
	for(i =0 ;i<20 ;i++)
	{
		scanf("%c",&text[i]);
		if(text[i]=='\n')
		{
			j=i-1;
			i=i-1;
			reverse();
			break;

		}

	}

	return 0;

}
void reverse()
{


	for(j=0 ;i>=0;j++,i--)
	{
		rev[j]=text[i];

	}
	printf("%s",rev);



}


