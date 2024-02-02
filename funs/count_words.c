#include <stdio.h>


int count_words(char s[100])
{
 int i, count = 0;

    for(i = 0; s[i] != '\0'; i ++)
    {
         if(s[i] == ' ')
            count ++;
    }

    return count + 1;
}


void main()
{
    printf("Count = %d",  count_words("how are you today"));

}



