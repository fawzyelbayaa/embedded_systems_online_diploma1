/*
 * main.c
 *
 *  Created on: Jul 25, 2021
 *      Author: fawzy
 */
#include "stdio.h"
int res=1;
int power(int base , int exp);
int main()
{
	int i,j;

	printf("enter base number : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&i);

	printf("\n");

	printf("enter power number (positive integer) :");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&j);
	power(i,j);
	printf("%d",res);



return 0;
}
int power(int base,int exp){
	static int count =0;

	if(count<exp)
	{
		count ++;
		power(base,exp);
		res = res*base;
	}

	return res;



}


