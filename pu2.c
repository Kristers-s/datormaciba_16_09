#include <stdio.h>
int main() {
char  a = 0;
printf("Ievadiet decimalskaitli ");
scanf("%s",&a);
a = a<<7;
a = a>>7;
a = a<<6;
a = a>>7;
a = a<<5;
a = a>>7;
a = a<<4;
a = a>>7;
a = a<<3;
a = a>>7;
a = a<<2;
a = a>>7;
a = a<<1;
a = a>>7;
printf("bin kods %d ",a);


return 0;
}
