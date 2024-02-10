#include <stdio.h>

void main()
{
 FILE * fp;
 char ch, i;

    fp = fopen("chars.txt", "wt");  // write text

    printf("Enter chars :");
    for(i = 1; i <= 10; i ++)
    {
       ch = getche();
       fputc(ch,fp);
    }

    fclose(fp);
}
