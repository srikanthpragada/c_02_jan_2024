// Take 3 numbers and display the largest
#include <stdio.h>


void main()
{
int m1, m2;

    printf("Enter marks in two subjects :");
    scanf("%d%d",&m1,&m2);

    if(m1 > 80)
        if(m2 > 80)
            printf("Grade A");
        else
            printf("Grade B");
    else
        if(m2 > 80)
           printf("Grade C");
        else
           printf("Grade D");

    /*
    if(m1 > 80 && m2 > 80)
        printf("Grade A");
    else
        if (m1 > 80)
            printf("Grade B");
        else
           if(m2 > 80)
              printf("Grade C");
           else
              printf("Grade D");
   */
}
