#include <stdio.h>

void main()
{
 FILE * fp;
 int marks, count;


    fp = fopen("marks.dat", "rb");  // read binary
    if(fp == NULL) // failed to open
    {
        printf("Sorry! Could not open file!");
        exit(1); // Terminated with error
    }


    while(1)
    {
       count = fread(&marks, sizeof(marks), 1, fp);
       if(count == 0) // EOF
         break;

       printf("%3d",marks);
    }

    fclose(fp);
}
