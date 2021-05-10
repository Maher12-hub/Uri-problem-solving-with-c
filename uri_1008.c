#include<stdio.h>
int main(){
int number,work_hour;
double amount,total;
scanf("%d",&number);
scanf("%d",&work_hour);
scanf("%lf",&amount);
total=amount*work_hour;
printf("NUMBER = %d\n",number);
printf("SALARY = U$ %.2lf\n",total);




}
