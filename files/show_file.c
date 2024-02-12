#include <stdio.h>
// Program to take input from command-line

void main(int argc, char* argv[])
{
 FILE * fp;
 char ch;

    if(argc < 2)
    {
        printf("Sorry! Filename is missing. Please provide filename on command-line!");
        exit(2);  // Exit due to missing filename
    }

    fp = fopen(argv[1], "rt");  // read text
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
