/*
 * main.c
 *
 *  Created on: Jul 24, 2021
 *      Author: fawzy
 */

#include "stdio.h"
int prime_check(int number);
int  main()
{
	int i ,res,n1 ,n2;
	printf("enter two numbmers (intervals)\n");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("prime number between %d and %d are :",n1 ,n2);
	for(i=n1 ; i<n2 ;i++)
	{
		 res =  prime_check(i);
		 if(res==1)
		 	{
		 		printf("%d ",i);
		 	}
	}

return 0;





}
int prime_check(int number)
{
	int k , res;
	for(k=2 ;k<number/2 ;k++)
	{
		if(number % k==0)
		{
			res =0;
			break;
		}
		else
		{
			res= 1;

		}
	}
	return res;





}


