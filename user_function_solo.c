#include <stdio.h>
int function_nr1();
int function_nr2();
int function_nr3(int nr3_1);
double function_nr4(int nr4_1, int nr4_2, int nr4_3);

int main () {
function_nr2();
function_nr3(2);
function_nr4(2, 5, 1);

printf("_____________________________________________ \n");
printf("this is main function \n");
printf("function nr2 return value is %d \n",function_nr2());

return 0;
}

int function_nr1(){
int alfa = 234;
return alfa;
}

int function_nr2() {
for(int i = 1, i<=10,i++) {
printf("skaitlis i aug = %d\n", i) 
}
return i;
}

int(function_nr3(int nr3_1) {
int gamma = nr3_1 * nr3_1;
printf ("Entered number gets squared = %d\n ", gamma)
return gamma; 
}

double function_nr4(int nr4_1, int nr4_2, int nr4_3) {
double beta = (double) nr4_1 * nr4_2 + nr4_3;
printf("rezultats darbibai %f  * %d + %d = %f\n "); 
return 0;
