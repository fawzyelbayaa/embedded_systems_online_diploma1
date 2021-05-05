/*
 * main.c
 *
 *  Created on: May 3, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int main()
{
	char text[50];
	int i,count =0;
	char c;
	printf("enter a string\n");
	fflush(stdin);     fflush(stdout);
	gets(text);
	printf("enter a character to find frequency\n");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&c);
	for(i=0;i<sizeof(text) ;i++)
	{
		if(c==text[i])
		{
			count++;

		}

	}
	printf("frequency of %c =%d",c,count);


	return 0;

}


