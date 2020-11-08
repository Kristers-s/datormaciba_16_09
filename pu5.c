#include <stdio.h>
int main () {
int a;
int f;
int i;
char c;

printf("Ievadiet decimalskaitli: \n ");
scanf(" %d",&a);
printf("Ievadiet velamo datutipu (i-int, l-long, c-char)\n");
scanf(" %c",&c);
f=a;

//---------------------------------------
if(c=='i') {
for(i=a; a/i !=a && f%a==0;i--) {
f = f*i;
printf(" f = %d i = %d\n", f, i);
}
if(f%a==0){
printf("skaitla %d faktorials ir %d\n", a, f);
}else {
printf("izvelieties atbilstosu datutipu\n");
}
}

//--------------------------------------
if(c=='l') {
long int la = (long int) a;
long int lf = (long int) f;
long int li = (long int) i;
for(li=la; la/li !=la && lf%la==0;li--) {
lf = lf*li;
printf(" f = %ld i = %ld\n", lf, li);
}
if(lf%la==0){
printf("skaitla %ld faktorials ir %ld\n", la, lf);
}else {
printf("izvelieties atbilstosu datutipu\n");
}
}
//-----------------------------------------
if(c=='c') {
char ca = (char) a;
char cf = (char) f;
char ci = (char) i;
for(ci=ca; ca/ci !=ca && cf%ca==0;ci--) {
cf = cf*ci;
printf(" f = %s i = %s\n",&cf, &ci);
}
if(cf%ca==0){
printf("skaitla %s faktorials ir %s\n", &ca, &cf);
}else {
printf("izvelieties atbilstosu datutipu\n");
}
}


return 0;
}
