#include<stdio.h>
#include<math.h>
void main(){
float a,b,eps,h,integr2,integr1 = 0,integr2t,integr2s, summ,x;
int k, n =2;
printf("ievadiet a vertibu:");
scanf("%f",&a);
printf("ievadiet b vertibu:");
scanf("%f",&b);
printf("ievadiet eps:");
scanf("%f",&eps);

//taisnstura metode
integr2 =(0.5)* (b-a) * (j0(a/2) + j0(b/2))/n;
printf("%.3f    %.3f\n",integr1, integr2);
while (fabs(integr2-integr1)>eps) {
n*=2;
h=(b-a)/n;
integr1 = integr2;
integr2 = 0;
for(k=0; k<n; k++)
integr2+=h*j0((a+(k+0.5)*h)/2);
printf("%.3f    %.3f\n",integr1, integr2);
}
printf("Integraalja veertiiba taisnstura metodei : %2f(%d elementi)\n", integr2, n);
//trapeces metode
n=2;
integr1 = 0;
h = (b-a)/n;
integr2 =(0.5)*h* (j0(a/2) + j0(b/2))/n;
printf("%.3f    %.3f\n",integr1, integr2);
while (fabs(integr2-integr1)>eps) {
n*=2;
h=(b-a)/n;
integr1 = integr2;
integr2 = 0;
for(k=0; k<n; k++)
integr2+=(h*(j0((a+k*h)/2)+j0((a+k*h+h)/2)))/2;
printf("%.3f    %.3f\n",integr1, integr2);
}
printf("Integraalja veertiiba trapeces metodei : %.2f (%d elementi)\n", integr2,n);
// simsona metode
n = 2;
integr1 = 0;
h=(b-a)/n;
integr2s =(h/3)+(j0(a/2) + j0(b/2)+4*j0((a+b)/4));
printf("%.3f    %.3f\n",integr1, integr2s);
while (fabs(integr2s-integr1)>eps) {
n*=2;
h=(b-a)/n;
integr1 = integr2s;
integr2s = 0;
for(k=0; k<n; k++){
x=a+k*h;
if (k%2==0){
summ = summ+2*j0(x/2);
}
else {
summ = summ+4*j0(x/2);
}
}
integr2s=(h/6)*(j0(a/2)+j0(b/2)+summ);
printf("%.3f    %.3f\n",integr1, integr2s);
}
printf("Integraalja veertiiba simsona metodei : %.2f(%d elementi)\n", integr2s, n);


}
