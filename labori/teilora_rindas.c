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
