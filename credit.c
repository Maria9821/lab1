#include <stdio.h>
#include <cs50.h>
long credit;
int getting_the_final_total_number (void);
void checking_which_kind (void);
int main(void)
{
   credit = get_long("Number: ");
   int i = 0;
   long number_count = credit;
   while(number_count > 0)
   {
      number_count /= 10;
      i++;
   }
   if(i != 13 && i != 15 && i != 16)
   {
      printf("INVALID\n");
      return 0;
   }
   int total = getting_the_final_total_number(); 
   if(total % 10 != 0)
   {
      printf("INVALID\n");
      return 0;
   }
   checking_which_kind();
}
int getting_the_final_total_number (void)
{
   long credit_one = credit;
   int mod_1;
   int mod_2;
   int sum_1 = 0;
   int m;
   int d;
   int sum_2 = 0;
   do
   {
      mod_1 = credit_one % 10;
      credit_one = credit_one / 10;
      sum_1 += mod_1;
      mod_2 = credit_one % 10;
      credit_one = credit_one / 10;
      mod_2 = mod_2 * 2;
      m = mod_2 % 10;
      d = mod_2 / 10;
      sum_2 = sum_2 + m + d;
   }
   while(credit_one > 0);
   return sum_1 + sum_2;
}
void checking_which_kind (void)
{
   long cc = credit;
   do
   {
    cc = cc / 10;
   }
   while(cc > 100);
   if(cc / 10 == 5 && (cc % 10 > 0 || cc % 10 < 6))
   {
      printf("MASTERCARD\n");
   }
   else if(cc / 10 == 3 && (cc % 10 == 4 || cc % 10 == 7))
   {
      printf("AMERICAN EXPRESS\n");
   }
   else if(cc / 10 == 4 && cc % 10 >= 0)
   {
      printf("VISA\n");
   }
   else
   {
      printf("ERROR");
   }
}
