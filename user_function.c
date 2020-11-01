//data type of returned value>
//user_function(place for arguments ){ place for action; return returned_value; }
//              fuvtion can be without argument(s)
//                                          Function can be without return
// data_type_of_return_value - void
//1. function without arguments, without returned value
//2. function without arguments, with returned value
//3. function with arguments, without returned value
//4. function with arguments, with returned value
//
// function can define before main
// function can declare before main and after be  main defined


#include <stdio.h>

void my_first_function();
int my_second_function();
void my_third_function(int in_a_3);
double my_fourth_function(int in_a_4a, int in_a_4b);

int main()
{
int a_main;
printf("HelloWorld \n");
a_main = my_second_function();
my_second_function();
printf("Output of second function %d\n ",my_second_function());
printf("HelloWorld \n");
my_first_function();
my_third_function(300);
return 0;
}

void my_first_function()
{
printf("hello wrld! from my first function\n " );
}

int my_second_function()
{
int a_2 = 10;
printf("hello wrld! from my second function\n " );
return a_2;
}

void my_third_function(int in_a_3)
{
printf("hello wrld! from my third function\n " );
printf("in_a_3 = %d from third function \n", in_a_3); 
}

double my_fourth_function(int in_a_4a, int in_a_4b)
{
double result = (float)in_a_4a / in_a_4b;
printf("hello wrld! from my fourth function\n " );
printf("%d / %d = %.3f from third function \n", in_a_4a, in_a_4b, result); 
return result;
}
