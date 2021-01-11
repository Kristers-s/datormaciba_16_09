#include <stdio.h>
#include <math.h>
float modified_bess(float x, float A) {
return j0(x/2)-A;
}
int main(){
float a,x,delta_x=1.e-3,b,y,A,funkca,funkcb,funkcx;
int k = 0;
//a = 0;
//b = 2*M_PI;

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
//x=a;
//delta_x = 0.1;
//printf("\tx\ty\n");
//while(x<b) {
//printf("%10.1f%10.1f\n",x,modified_bess(x,A));
//x+= delta_x;

}
