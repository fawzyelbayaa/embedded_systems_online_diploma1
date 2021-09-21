/*
 * main.c
 *
 *  Created on: Aug 26, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int m=29;
int *ab =&m;
int main()
{
	printf("address of m = %p\n", &m);
	printf("values of m =%d\n",m);

	printf("address of pointer ab =%p\n",ab);
	printf("content of pointers ab =%d\n",*ab);

	*ab=34;
	printf("address of pointer ab=%p\n",ab);
	printf("content of pointers ab =%d\n",*ab);

	*ab=7;
	printf("address of pointer ab=%p\n",ab);
	printf("content of pointers ab =%d\n",*ab);


}



