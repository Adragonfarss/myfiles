#include <stdio.h>
#include <cs50.h>

int TOTAL;

// the functions of the programe
float average(int length, int array[]);

int main(void)
{
    TOTAL = get_int("Enter the number of students: ");

    int scores [TOTAL];

// a loop to get scores from user
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score%d: ", i + 1);

    }

// printing the average
    printf("Average: %.2f\n", (float)average(TOTAL, scores));
}

// a function to calculate the average
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}