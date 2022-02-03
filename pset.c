/*program to calculate the modulus of three numbers..
if it returns zero(0) it will print correct method, if not it will print ..
"not recognized ...*/
#include <stdio.h>
const int TOTAL = 3;

int main(void){
int x[TOTAL];
  
for (int i = 0; i < TOTAL; i++)
{
   printf("Enter three values%d:", i + 1);
   scanf("%d", &x[i]);
}
if (x[0] % x[1] != 0 && x[1] % x[2] != 0)
{
   printf("NOT_RECOGNIZED!");
}
else
{
   printf("correct_method\n");
}

}