/*
 * NoteCode1.c
 *
 *  Created on: Feb 17, 2019
 *      Author: alexa
 */
#include <stdio.h>  //standard input output built into c library

typedef int number;

 int main() {

   number c;
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   c = getchar( );

   printf( "\nYou entered: ");
   putchar( c );

   return 0;
}

