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
Šajā darbā tiek izmantotas Teilora rindas ar rekurences reizinātāju un parastā matemātiskā funkcija, lai nonāktu pie atbildes. Funkcijai tiek manuāli aprēķināts rekurences reizinātājs, kuru tālāk izmanto, lai tālāk tiktu pie atbildes. Attīstoties rindai, tā koverģē, kā rezultātā var nonāt pie atbildes.
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
