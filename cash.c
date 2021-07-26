#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float cash, tax, credit;

    // getting cash value
    cash = get_float("Enter your cash : ");

    // calculating the tax
    tax = cash * 30 / 100;

    // calculating the actual value that u will get
    credit = cash - tax;

    //printing out the actual value that u will get
    do
    {

        printf("you have added %f", credit);

    }
    while (cash < tax);

}