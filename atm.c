#include <stdio.h>

int get_positive_cash(void);
int p_transaction(void);

int main(void)
{
  // getting input from client

int cash = get_positive_cash();
int transaction = p_transaction();

if (cash <= transaction)
{
     printf("Process unsuccessful!...\n");
}
else if(cash > transaction)
  {
      printf("process successful.....\n");
      printf("Your cash: %0.2f\n", (float)cash - transaction - 0.50);
  }
  else
  {
      printf("Process unsuccessful!...\nunrecognized variables\n");
  }
  
}
  


int get_positive_cash(void)
{
    int p_num;
    do
    {
        //getting cash
        printf("Enter the cash in your credit: ");
        scanf("%d", &p_num);

    } while (p_num < 0);

    return p_num;
}

int p_transaction(void)
{
      int p_tran;
    do
    {
        //getting cash
        printf("Enter the tansaction you need: ");
        scanf("%d", &p_tran);

    } while (p_tran < 0);

  return p_tran;
}