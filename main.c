/*
 * main.c
 *
 *  Created on: Oct 29, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int equal_string(char*p_s1,char*p_s2)
{
	int i,j;
	for(i=0,j=0;*(p_s1)!=0,*(p_s2)!=0;i++,j++)
	{
		if(*(p_s1)==*(p_s2))
		{
			p_s1++;
			p_s2++;
		}
		else if(*(p_s1)<*(p_s2))
		{
			p_s1++;
			p_s2++;
			return -1;

		}
		else
		{
			p_s1++;
			p_s2++;
			return 1;
		}
	}
	return 0;
}
int main()
{
	char s1[50];
	char s2[50];
	printf("enter the first string\n");
	fflush(stdin);   fflush(stdout);
	gets(s1);
	printf("enter the second string\n");
	fflush(stdin);   fflush(stdout);
	gets(s2);
	int equal = equal_string(s1,s2);
	printf("%d",equal);


	return 0;
}


