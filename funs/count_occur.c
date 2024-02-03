#include <stdio.h>


int count(char s[100], char ch)
{
 int i, count = 0;

    for(i = 0; s[i] != '\0'; i ++)
    {
         if(s[i] == ch)
            count ++;
    }
    return count;
}


void main()
{
    printf("Count = %d",  count("abcadexyaf", 'a'));

}



