// Use random access to read marks for the given rollno.

#include <stdio.h>

void main()
{
 FILE * fp;
 int marks, pos, rollno, count;

    fp = fopen("marks.dat", "rb");  // read binary
    if(fp == NULL) // failed to open
    {
        printf("Sorry! Could not open file!");
        exit(1); // Terminated with error
    }

    while(1)
    {
       printf("Enter rollno [0 to stop]:");
       scanf("%d",&rollno);

       if(rollno == 0)
         break;

       pos = (rollno - 1) * sizeof(int);

       fseek(fp, pos, SEEK_SET); // move file pointer from starting position

       count = fread(&marks, sizeof(marks), 1, fp);
       if(count == 0) // EOF
           printf("Invalid Rollno!\n");
       else
           printf("Marks = %d\n", marks);
    }

    fclose(fp);
}
