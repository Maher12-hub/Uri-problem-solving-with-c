#include<stdio.h>
int main(){
int duration;
scanf("%d",&duration);
int hours=duration/3600;
int rem1=duration%3600;
int minutes=rem1/60;
int secondes=rem1%60;
printf("%d:%d:%d\n",hours,minutes,secondes);


}
