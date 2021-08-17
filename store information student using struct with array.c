/*
 * main.c
 *
 *  Created on: Aug 6, 2021
 *      Author: fawzy
 */
#include "stdio.h"
struct student
{
	int roll;
	char name[20];
	int marks;
};
struct student store();
int main()
{
	store();


	return 0;
}
struct student store()
{
	int i;
	struct student x[10];
	printf("enter information of student \n");
	for(i=1;i<=10;i++)
	{
		x[i].roll=i;
		printf("for roll number %d\n",x[i].roll);
		printf("enter name ");
		fflush(stdin);   fflush(stdout);
		scanf("%s",x[i].name);
		printf("enter marks ");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&x[i].marks);
	}
	printf("displaying information of student\n");
	for(i=1 ;i<=10;i++)
	{
		printf("information of roll number %d :\n",x[i].roll);
		printf("name : %s\n",x[i].name);
		printf("marks :%d\n",x[i].marks);
	}


}



