#include <stdio.h>


int count_digits(char s[100])
{
 int i, count = 0;

    for(i = 0; s[i] != '\0'; i ++)
    {
         if(isdigit(s[i]))
            count ++;
    }

    return count;
}


void main()
{
    printf("Count = %d",  count_digits("abc123xy45"));

}



