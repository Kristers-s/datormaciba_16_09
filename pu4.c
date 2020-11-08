#include <stdio.h>
int main () {
int  a;
char d;
int i,f;

printf("ievadiet decimalskoaitli:\n");
scanf("%d",&a); 
printf("ievadiet kadu datutapu izmantot(c - char, i -int,  l -long :\n");
scanf(" %c",&d);
f = a;
i = a;
//-------------------------------------------------------------
if(d=='i') {
while(a/i != a && f%a == 0)
{
printf("i ir %d\n", i);
f = f*i;
i--;
printf("f ir %d\n", f);
}
if(f%a==0) {
printf("Skaitla %d faktorials ir %d\n",a ,f);
}else {
printf("Izvelieties atbilstosu datutipu \n");
}

//--------------------------------------------------------
}else if(d== 'c') {
char ca = (char) a;
char cf = (char) f;
char ci = (char) i;
while(ca/ci != ca && cf%ca == 0)
{
printf("i ir %s\n", &ci);
cf = cf*ci;
ci--;
printf("f ir %s\n", &cf);
}
if(cf%ca==0) {
printf("Skaitla %s faktorials ir %s\n",&ca ,&cf);
}else {
printf("Izvelieties atbilstosu datutipu \n");
}


//-------------------------------------------------------------------
}else if (d == 'l') {
long int la = (long int) a;
long int lf = (long int) f;
long int li = (long int) i;
while(la/li != la && lf%la == 0)
{
printf("i ir %ld\n", li);
lf = lf*li;
li--;
printf("f ir %ld\n", lf);
}
if(lf%la==0) {
printf("Skaitla %ld faktorials ir %ld\n",la ,lf);
}else {
printf("Izvelieties atbilstosu datutipu \n");
}

}

return 0;
}
