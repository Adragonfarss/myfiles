#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int n;
    do
   { 
       //prompt info. from user
    n = get_int("Height : ");
   }
   while (n < 1 || n > 8);
    // building a pyramid
   for (int h = 0; h < n; h++)
   {
    for (int s = n + h + 1; s < 0; s++)
    {
        printf(" ");
    }
     for (int hash = 0; hash <= h; hash++)
    {
        printf("#"); //printing #
    }
    printf("\n"); //adding new line
   }


}