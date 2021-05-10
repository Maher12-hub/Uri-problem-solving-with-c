#include<stdio.h>
#include<math.h>
int main(){
double total;
scanf("%lf",&total);
int notas_100=total/100;
double rem1=fmod(total,100);
int notas_50=rem1/50;
double rem2=fmod(rem1,50);
int notas_20=rem2/20;
double rem3=fmod(rem2,20);
int notas_10=rem3/10;
double rem4=fmod(rem3,10);
int notas_5=rem4/5;
double rem5=fmod(rem4,5);
int notas_2=rem5/2;
double rem6=fmod(rem5,2);
int moedas_1=rem6/1;
double rem7=fmod(rem6,1);
int moedas_0_50=rem7/0.50;
double rem8=fmod(rem7,0.50);
int moedas_o_25=rem8/0.25;
double rem9=fmod(rem8,0.25);
int moedas_0_10=rem9/0.10;
double rem10=fmod(rem9,0.10);
int moedas_0_05=rem10/0.05;
double rem11=fmod(rem10,0.05);
int moedas_0_01=rem11/0.01;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",notas_100);
printf("%d nota(s) de R$ 50.00\n",notas_50);
printf("%d nota(s) de R$ 20.00\n",notas_20);
printf("%d nota(s) de R$ 10.00\n",notas_10);
printf("%d nota(s) de R$ 5.00\n",notas_5);
printf("%d nota(s) de R$ 2.00\n",notas_2);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",moedas_1);
printf("%d moeda(s) de R$ 0.50\n",moedas_0_50);
printf("%d moeda(s) de R$ 0.25\n",moedas_o_25);

printf("%d moeda(s) de R$ 0.10\n",moedas_0_10);
printf("%d moeda(s) de R$ 0.05\n",moedas_0_05);
printf("%d moeda(s) de R$ 0.01\n",moedas_0_01);



}
