/*
 * main.c
 *
 *  Created on: Aug 5, 2021
 *      Author: fawzy
 */
#include"stdio.h"
struct student
{
	char name[30];
	int roll;
	float marks;
};
struct student x;
int main()
{
	printf("enter information of student\n");
	printf("enter name :");
	fflush(stdin);    fflush(stdout);
	scanf("%s",x.name);
	printf("\n");
	printf("enter roll number :");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&x.roll);
	printf("\n");
	printf("enter marks :");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&x.marks);
	printf("\n");

	printf("displaying information\n");
	printf("name :%s\n",x.name);
	printf("roll :%d\n",x.roll);
	printf("marks :%f\n",x.marks);


	return 0;


}


