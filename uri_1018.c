#include<stdio.h>
int main(){

int notes;
scanf("%d",&notes);
printf("%d\n",notes);
int a=notes/100;
printf("%d nota(s) de R$ 100,00\n",a);
int rem1=notes%100;
int b=rem1/50;
printf("%d nota(s) de R$ 50,00\n",b);
int rem2=rem1%50;
int c=rem2/20;
printf("%d nota(s) de R$ 20,00\n",c);
int rem3=rem2%20;
int d=rem3/10;
printf("%d nota(s) de R$ 10,00\n",d);
int rem4=rem3%10;
int e=rem4/5;
printf("%d nota(s) de R$ 5,00\n",e);
int rem5=rem4%5;
int f=rem5/2;
printf("%d nota(s) de R$ 2,00\n",f);
int rem6=rem5%2;
int g=rem6/1;
printf("%d nota(s) de R$ 1,00\n",g);


}
