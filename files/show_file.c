#include <stdio.h>

void main()
{
 char filename[50];
 FILE * fp;
 char ch;

    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");  // read text
    if(fp == NULL) // failed to open
    {
        printf("Sorry! Could not open file!");
        exit(1); // Terminated with error
    }

    while(1)
    {
       ch = fgetc(fp); // read char from file
       if(ch == EOF)   // End of file
         break;

       putch(ch);
    }

    fclose(fp);
}
