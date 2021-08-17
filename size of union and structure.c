/*
 * main.c
 *
 *  Created on: Aug 6, 2021
 *      Author: fawzy
 */
#include "stdio.h"
struct s_size
{
	char name[32];
	int x;
	float y;
}s;
union u_size
{
	char u_name[32];
	int m;
	float y;
}u;
int main()
{
	printf("%d\n",sizeof(u));
	printf("%d\n",sizeof(s));


	return 0;
}



