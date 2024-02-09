#include <stdio.h>

void main()
{
 FILE *fp;
 char ch;

    fp = fopen("chars.txt", "wt");  // write text

    for(ch = 97; ch <= 122; ch ++)
    {
       fputc(ch,fp);
    }

    fclose(fp);
}
