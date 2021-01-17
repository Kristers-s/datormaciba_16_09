#include<stdio.h>
#include<math.h>
#define N 1000

double fp(double x) {
return (x*cos(x/2) - (2*sin(x/2)))/x*x;
}
double fpp(double x) {
 return (j1(x/2)/x) - ((1/4)*((2*sin(x/2))/x));
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
//x+=delta_x;
}
//x = a;
//while(x<b) {
//x+=delta_x;
//}


}
