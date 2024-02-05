#include <stdio.h>


int find_pos(char s1[20], char s2[20])
{
 int i, j;

    for(i = 0; s2[i] != '\0'; i ++)
    {
         for(j = 0; s1[j] != '\0'; j ++)
         {
             if (s1[j] == s2[i])
                return j;
         }
    }
    return -1;
}

void main()
{
    printf("Position = %d",  find_pos("hello", "wishing"));

}



