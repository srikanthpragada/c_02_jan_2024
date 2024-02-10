#include <stdio.h>

void main()
{
 FILE * fp;
 char name[30], *p;


    fp = fopen("names.txt", "rt");  // write text
    if(fp == NULL) // failed to open
    {
        printf("Sorry! Could not open file!");
        exit(1); // Terminated with error
    }

    while(1)
    {
       p = fgets(name,30,fp);  // read one line
       if(p == NULL)  // EOF
           break;

       printf("%s", name);
    }

    fclose(fp);
}
