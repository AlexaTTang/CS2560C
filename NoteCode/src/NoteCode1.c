/*
 * NoteCode1.c
 *
 *  Created on: Feb 17, 2019
 *      Author: alexa
 */
//CREATE AND WRITE TO FILE
#include <stdio.h>

int main()
{
   FILE *fp;        //pointer to a file type

   fp = fopen("textFile.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   return 0;
}

