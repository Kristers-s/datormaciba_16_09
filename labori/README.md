# Beseļa funkcija j0(x/2)
## 1LD - Teilora Rindas
### Grafiks
![Grafiks](/labori/besselsf.png)
### Kods
```
#include <stdio.h>
#include <math.h>
double mans_sinuss (double x) {
double y,a,S;
int k = 0;
a  = ( pow(-1,k) * pow(x,2*k))/(1*1);
printf("a = %.4f\n",a);
S=a;
while (k<500){
k++;
a = a*(((-1)*pow(x,2)) /( (16*pow(k,2))));
S = S + a;
printf("%.6f\t%8.6f\t%8.6f\n",x,a,S); 
if(k == 499){
printf("a499 = %.2f S500 = %.2f\n",a ,S);
}else if(k==500) {
printf("a500 = %.2f S499 = %.2f\n",a ,S);
}else if(k==10) {
printf("a0 = %.2f S0 = %.2f\n",a ,S);
}

}
return S;
}

int main() {
double x,y,yy,a0;
printf("Bessela funkcijas aprekinasana\n");
printf("Ievadi argumentu x=");
scanf("%lf",&x);
printf("\n");
y=j0(x/2);
yy=mans_sinuss(x);
printf("bessela funkcija j0(%.2f)=%.2f\n",x,y);
printf("bessela funkcija caur summu y=j0(%.2f)=%.2f\n",x,yy);
printf("           500\n");
printf("         _____            \n");
printf("        \\             k   2*k\n");
printf("         \\        (-1) * x \n");
printf("j0(%.2f) => ___________________\n",x);
printf("         /            2    k \n");
printf("        /____     (k!) * 16 \n");
printf("        k=0\n");
printf("\n ");
printf("                            2\n");
printf("                          -x \n");
printf("rekurences reizinatajs: _________\n");
printf("                          k*k*16\n");


return 0;
}
```
### Apraksts
``` 
Šajā darbā tiek izmantotas Teilora rindas ar rekurences reizinātāju un parastā matemātiskā funkcija,
lai nonāktu pie atbildes. Funkcijai tiek manuāli aprēķināts rekurences reizinātājs,
kuru tālāk izmanto, lai tālāk tiktu pie atbildes. Attīstoties rindai, tā koverģē, kā rezultātā var nonāt pie atbildes.
```
## LD2 - Roots
### Grafiks
![Grafiks](/labori/besselsf_v2.png)
### kods

```
#include <stdio.h>
#include <math.h>

float modified_bess(float x, float A) {
return j0(x/2)-A;
}

int main(){
float a,x,delta_x=1.e-3,b,y,A,funkca,funkcb,funkcx;
int k = 0;

//Tiek pieprasītas robežas un vērtība pie kurasa tiks veikta inversija
printf("Cien. liet. ievadiet a robezu ");
scanf("%f",&a);
printf("Cien. liet. ievadiet b robezu ");
scanf("%f",&b);
printf("Cien. liet. ievadiet A vertibu ");
scanf("%f",&A);

funkca = j0(a/2); funkcb = j0(b/2);

if(funkca*funkcb>0) {
printf("Inervala [%.2f;%.2f] j0(x) funkcijai",a,b);
printf("saknju nav(vai taja ir paaru saknju skaits)\n");
return  1;
}
printf("j0(%7.3f)=%7.3f\t\t\t\t",a,j0(a/2));
printf("j0(%7.3f) = %7.3f",b,sin(b));

while((b-a)>delta_x){
k++;
x=(a+b)/2;
if(funkca*j0(x/2)>0){ 
a=x;}
else{
b=x;}

printf("%2d. iteraacija : j0(%7.2f)=%7.3f\t\n",k,a,sin(a));
printf("j0(%7.3f)=%7.3f\t",x,modified_bess(x,A));
printf("j0(%7.3f)=%7.3f\t\n",b,j0(b));}
printf("Sakne atrodas pie x=%.3f, jo j0(x) ir %.3f\n",x,modified_bess(x,A));
return 0;
}
```
### Apraksts
```
Darbā tika izmantota Dihotomijas metode, ar kuras palīdzību var noteikt "inverto izteiksmi",
tas ir var noteikt x vērtību funkcijā f(x) pie Lietotajam nosakamas y vērtības,
kādā apgabalā. Kā metode strādā? - noteiktais apgabals tiek sadalīts uz pusem,
tad tiek noteikts, kurā pusē ir x. To apgabalu dala atkal divās daļās un procesu atkārto,
līdz tas kļūst precīzs.
```
## LD3-Derivative
## Grafiks
![Grafiks](/labori/derivative_v3.png)
### Kods
```
#include<stdio.h>
#include<math.h>
#define N 1000

double fp(double x) {
return (-1)*j1(x/2)/2;
}
double fpp(double x) {
 return (j1(x/2)/(x*2)) - (j0(x/2)/4);
}

void main() {
double a=0,b=0,delta_x=0.1;
printf("ievadiet a vertibu:");
scanf("%lf",&a);
printf("ievadiet b vertibu:");
scanf("%lf",&b);
printf("ievadiet delta_x(sola vertibu):");
scanf("%lf",&delta_x);
double y[N], x[N], y_prim[N-1], y_2prim[N-2];
int i;
double c = sqrt(pow(a,2))+ sqrt(pow(b,2));
for(i=0;i<(c/delta_x);i++) {
x[i] = a + i*delta_x;
y[i] = j0(x[i]/2);
}
for(i=0;i<(c/delta_x)-1;i++) {
y_prim[i] = (y[i+1] -y[i])/(x[i+1]-x[i]);
}
for(i=0;i<(c/delta_x)-2;i++) {
y_2prim[i] = (y_prim[i+1] -y_prim[i])/(x[i+1]-x[i]);
}
printf("\tx\t\tj0(x/2)\t\tskj0\'\tj0\'(x/2)\tskj0\"(x/2)\tj0\"(x/2)\n ");
for(i=0;i<(c/delta_x)-2;i++) {
printf("%10.4f\t%10.4f\t%10.4f\t%10.4f\t%10.4f\t%10.4f\n",x[i],y[i],fp(x[i]), y_prim[i],fpp(x[i]), y_2prim[i]);
}

}
```
### Apraksts
```
Uzdevumā tika rēķināts atvasinājums izmantojot 2 metodes: skaitlisko un analītisko.
Skaitliskajā metodē atvasinājums tika rēkināts ar atvasinājumu pārveidojumiem no
Wolfram alpha, bet analītiskajā metodē atvasinājums tika rēķināts ar difereneces palīdzību.
```
