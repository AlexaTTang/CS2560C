/*
 * NoteCode1.c
 *
 *  Created on: Feb 17, 2019
 *      Author: alexa
 */
//You define type of I/O
//scanf and printf

//reading two items a string and int
#include <stdio.h>
int main( )
{

   char str[100];
   int i;

   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   scanf("%s %d", str, &i);

   printf( "\nYou entered: %s %d ", str, i);

   return 0;
}
