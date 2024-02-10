#include <stdio.h>

void main()
{
 FILE * fp;
 char name[30];


    fp = fopen("names.txt", "wt");  // write text
    if(fp == NULL) // failed to open
    {
        printf("Sorry! Could not open file!");
        exit(1); // Terminated with error
    }

    while(1)
    {
       printf("Enter name [end to stop] :");
       gets(name);

       if (strcmp(name, "end") == 0)
           break;

       fprintf(fp,"%s\n", name);
    }

    fclose(fp);
}
