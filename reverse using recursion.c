/*
 * main.c
 *
 *  Created on: Jul 25, 2021
 *      Author: fawzy
 */
#include"stdio.h"
int main()
{
    printf("enter a sentence :");
    reverse();
return 0;
}
void reverse()
{
    char c ;
    scanf("%c",&c);
    if(c!='\n')
    {
        reverse();
        printf("%c",c);
    }
}


