 #include <cs50.h>
#include <stdio.h>

int main(void)
{
    // sz is short for "start size"
    // ez is short for " end size"
    int sz, ez, years;

    // Prompt for start size
    do
    {
        sz = get_int("Start size: ");
    }
    while (sz < 9);

    // Prompt for end size
    do
    {
        ez = get_int("End size: ");
    }
    while (ez < sz);

    // Calculate number of years until we reach threshold

    for (years = 0; sz < ez; years++)
    {
        sz = sz + (sz / 3) - (sz / 4);
      

    }

    printf("Years : %i\n", years);
}