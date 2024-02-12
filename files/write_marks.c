#include <stdio.h>

void main()
{
 FILE * fp;
 int marks, i;


    fp = fopen("marks.dat", "wb");  // write binary
    if(fp == NULL) // failed to open
    {
        printf("Sorry! Could not open file!");
        exit(1); // Terminated with error
    }

    srand(time(0));
    for(i = 1; i <= 20; i ++)
    {
       marks = rand() % 100;
       printf("%5d",marks);
       fwrite(&marks, sizeof(marks), 1, fp);
    }

    fclose(fp);
}
