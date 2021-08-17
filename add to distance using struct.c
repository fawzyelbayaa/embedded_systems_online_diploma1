/*
 * main.c
 *
 *  Created on: Aug 5, 2021
 *      Author: fawzy
 */
#include "stdio.h"
struct distance
{
	int feet;
	float inch;
};

struct distance x(struct distance y);
int main()
{
	struct distance res;
	res = x(res);
	printf("sum of distance %d %.1f",res.feet,res.inch);


	return 0;
}
struct distance x(struct distance z)
{
	struct distance y, m ;
	printf("enter information for 1st distance\n");
	printf("enter feet :");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&y.feet);
	printf("\n");
	printf("enter inch :");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&y.inch);

	printf("\n");
	printf("enter information 2st distance\n");
	printf("enter feet:");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&m.feet);
	printf("enter inch:");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&m.inch);

	z.feet = y.feet + m.feet;
	z.inch = y.inch + m.inch;

	if(z.inch>12)
	{
		z.inch=z.inch-12;
		z.feet++;
	}

	return z;

}


