#include <stdio.h>
#include <math.h>
double mans_sinuss (double x) {
double xd = 2.05,y,a,S;
int k = 0;

a = pow(-1,k)*pow(xd,2*k+1)/(1.);
S = a;
printf("%.2f\t%8.2f\t%8.2f\n",xd,a,S); 

while (k<3){
k++;
a = a*(-1) *xd*xd / ((2*k)*(2*k+1));
S = S + a;
printf("%.2f\t%8.2f\t%8.2f\n",xd,a,S); 
}
return S;
}

int main() {
double x=2.05,y,yy;
y=sin(x);
printf("standarta funkcija y=sin(%.2f)=%.2f\n",x,y);
yy=mans_sinuss(x);
printf("lietotaja funkcija y=sin(%.2f)=%.2f\n",x,yy);
return 0;
}
