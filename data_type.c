
// kods  dazadu datu tipu petisanai
// info. vienibas ar kuram opere cilveks - simboli un skaitli
// simboli: burti, cipari punktuacijas zimes utt. - ASCII tabula simbols VS binars kods

//skaitli: veseli skaitli, reali skaitli, kompleksie skaitli(divas dalas Re un IM)


// informacijas vieniba, ar kuru opere dators - bits(0/1)
// informacijas vieniba ar adresi(dator'a) - baits\
// 1 byte == 8 bits
// ASCII table - one symbol == 1 byte
//unique binary combinations inside 1 byte -256
// 1 bits: 1 -2 kombin'acijas
// 2 biti : 00, 01 ,10, 11 - 4 kombinacijas
// 3 biti - 8 kombinacijas
// x biti ... - (stavoklu skaits)^(biti)
// ASCII tabula- 256 unikali simboli(ASCII tabula 1. dala 128 simboli)

#include<stdio.h>
#define A 11

void main()
{
char a = 10;// definesana
// 1. darbiba - RAM atmina tiek atveleta vieta viena char datu tupa mainiga glabasanai
// 'si vieta ir vinnozimigi sakedeta ar identifikatoru "a" (bet, vitei ir ari  adrese)
// saskana ar  char datutipu, vietas izmers - 1 baits
// Ka saja bridi izskatijas tas atminas apgabals: 0000 0101 vai 1111 1110 vai 0000 1010
//char a; //dekleresana
// 2. darbiba - v'ert'ibas pieskirsana
// a  = 10; // vertibas pieskirsana
// a-> 0000 1010
printf("mainiga a vertiba ir: %d\n",a);
a = 125;
printf("mainiga a vertiba ir: %d\n",a);
A = 126;// konstantu vertibu nevar mainit;
printf("mainiga A vertiba ir: %d\n",A);
char mans_mainigais = 45;//centisimies izmantot mnemoniskos nosaukumus - nosaukums atpogulo main'ig'a jegu vai nol'uku
a = 0x10;// |||||||||| 
printf("mainiga a vertiba ir: %d\n",a);// izvade - 16 - ok
printf("mainiga a vertiba ir: %x\n",a);// izvade - 10
printf("mainiga a vertiba ir: %o (oct) \n",a);// izvade - 20
printf("mainiga a vertiba ir simbols: %c\n",a);// izvade - A

a='k';
printf("mainiga a vertiba ir: %d\n",a);// izvade - 107
printf("mainiga a vertiba ir: %x\n",a);// izvade - 0X6b
printf("mainiga a vertiba ir: %o (oct) \n",a);// izvade - 153 (oct)
printf("mainiga a vertiba ir simbols: %c\n",a);// izvade - k

//http://cplusplus.com/reference/cstdio/printf/?kw=printf

unsigned char b = 128;
printf("mainiga b vertiba ir: %d\n",b);// izvade  128

//int
int c;
printf(" int datu tupa izmers baitos: %d\n",sizeof(c)); // izvade 4
//'soreiz int atbilst 4 baiti(32 biti)
//=> without sign 0...(2^32-1)
//=> with sign -(2^31)...0... (2^31-1)

//----------------------------------------------------------

float d = 6.5;//double
printf(" float datu tipa skaitla attelosana: %f\n",d);//izvade 6.500000
printf(" float datu tipa skaitla attelosana: %.2f\n",d);//izvade 6.50


}
