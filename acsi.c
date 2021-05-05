/*fawzy
 * main.c
 *
 *  Created on: Apr 26, 2021
 *      Author: fawzy
 */
#include "stdio.h"
void main(){
    char c;
    printf("Enter a character: ");

    fflush(stdout);
    scanf("%c",&c);        /* Takes a character from user */
    printf("ASCII value of %c = %d",c,c);




}



