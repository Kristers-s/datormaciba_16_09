

//Bitu operacijas - nobides << un >>
#include<stdio.h>
#include<time.h>
int main()
{
char a  = 5; // 0000 0101
char b = 1;
char c = a << b;// 0000 0101 << 1 -> 0000 1010
printf("%d << %d = %d\n",a,b,c);

b = 2;
c = a << b;// 00|00 01 01 << 2 -> 0001 01|00 ( 0001 0100)
printf("%d << %d = %d\n",a,b,c);

b = 2;
c = a << b;// 000|0 0101 << 3 -> 0010 1|000 (0010 1000)
printf("%d << %d = %d\n",a,b,c);

clock_t begin = clock();
cc = a << b;
clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf(" reizinasana ar 2, * operaciju: %f\n",time_spent)

clock_t begin = clock();
cc = a*2*2*2*2*2;
clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf(" reizinasana ar 2, * operaciju: %f\n",time_spent)


//logiskas operacijas &&,||
// salidzin'asanas operacijas <, >, <=, >=, ==, !=,
char f = 4;
char g = 5;
char h = f && g;
printf("%d && %d = %d\n",a,b,c);

h = g < h;
printf("%d < %d = %d\n",a,b,c);

printf("5>6 && 5!=6 = %d\n", ((5>6)&&(5!=6));// rezultats - 0
printf("5<6 && 5!=6 = %d\n", ((5<6)&&(5!=6));// rezultats - 1

printf("5>6 || 5!=6 = %d\n", ((5>6)||(5!=6));// rezultats - 1
printf("5<6 || 5!=6 = %d\n", ((5<6)||(5!=6));// rezultats - 1

//logiskas operacijas pa bitiem &, |, ~,

printf("5 & 6 = %d\n",5&6); // 0000 0101 & 0000 0110 = 0000 0100
printf("5 | 6 = %d\n",5|6); // 0000 0101 & 0000 0110 = 0000 0111
printf("~ 6 = %d\n",~6); // 0000 0110 = (1)111 1001 -> -000 0110 + 1 -> -000 0111 -> -7

// a -  40 000
// b - 100 000
// a * b = 4 000 000 000
// jaizpilda darbiba
// izmantojot bidishanu pa labi un pa kreisi jauztaisa parvietojums.



return 0;

