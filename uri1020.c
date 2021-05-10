#include<stdio.h>
int main(){
int total_days;
scanf("%d",&total_days);
int year=total_days/365;
int rem1=total_days%365;
int month=rem1/30;
int days=rem1%30;
printf("%d ano(s)\n",year);
printf("%d mes(es)\n",month);
printf("%d dia(s)\n",days);


}
