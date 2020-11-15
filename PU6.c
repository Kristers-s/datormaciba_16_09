#include <stdio.h>
void no_arg_no_ret();
int no_arg_yes_ret();
void yes_arg_no_ret(int a3);
double yes_arg_yes_ret(int a4, int b4);

int main() {
no_arg_no_ret();
no_arg_no_ret();
int main_a;
printf("Ievadiet skaitli ko kapinat kvadrata:\n ");
scanf(" %d",&main_a);
yes_arg_no_ret(main_a);
int main_b;
int main_c;

printf("Ievadiet skaitlus kurus saskaitit:\n ");
scanf(" %d",&main_b);
scanf(" %d",&main_c);

yes_arg_yes_ret(main_c, main_b);
printf("skaitlis kvadrata: %f\n",yes_arg_yes_ret(main_b, main_c));



return 0;
}

void no_arg_no_ret() {
printf("I am no argument and no return function\n ");
}

int no_arg_yes_ret() {
int a = 10;
printf("I am no argument and with  return function\n ");
return a;
}

void yes_arg_no_ret(int a3) {
int b3 = a3 * a3;
printf("I am argument and no return function\n ");
printf("The entered nummber - %d squared - %d \n ",a3 ,b3);
}

double yes_arg_yes_ret(int a4, int b4) {
double c4 = (double) a4 + b4;
printf("I am argument and with return function\n ");
return c4;
}
