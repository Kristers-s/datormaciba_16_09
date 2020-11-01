#include <stdio.h>
int main () {
unsigned long long int a;
unsigned long long int b;
printf("Ievadiet skaitli(400000)\n");
scanf("%llu", &a);
printf("Ievadiet skaitli(100000)\n");
scanf("%llu", &b);
unsigned long long int c = a*b;
printf("Skaitlu reizinajums :%llu \n", c);


return 0;
}
