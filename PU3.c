
#include <stdio.h>
int main ()
{
int a ;
int b ;
int c ;
char s;
printf("ievadiet 1.skaitli:");
scanf("%d", &a);
printf("ievadiet 2.skaitli:");
scanf("%d", &b);
printf("ievadiet 3.skaitli:");
scanf("%d", &c);
printf("ievadie skaitlu secibu augosa - u ; dilstosa - d \n");
scanf("%s", &s);

if (s == 'd') {

if (a >= b >= c) {
printf (" %d %d %d \n ",c ,b ,a);
}
else if (a >= c >= b) {
printf (" %d %d %d \n ",b ,c ,a);
}
else if (b >= a >= c) {
printf (" %d %d %d \n ",c ,a ,b);
}
else if (b >= c >= a) {
printf (" %d %d %d \n ",a ,c ,b);
}
else if (c >= a >= b) {
printf (" %d %d %d \n ",b ,a ,c);
}
else if (c >= b >= a) {
printf (" %d %d %d \n",a ,b ,c);
}

}

else if(s=='u') {

if (a >= b >= c) {
printf (" %d %d %d \n ",a ,b ,c);
}
else if (a >= c >= b) {
printf (" %d %d %d \n ",a ,c ,b);
}
else if (b >= a >= c) {
printf (" %d %d %d \n ",b ,a ,c);
}
else if (b >= c >= a) {
printf (" %d %d %d \n ",b ,c ,a);
}
else if (c >= a >= b) {
printf (" %d %d %d \n ",c ,a ,b);
}
else if (c >= b >= a) {
printf (" %d %d %d \n ",c ,b ,a);
}
}
return 0;
}

