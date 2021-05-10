#include<stdio.h>
int main(){
int start_day,end_day,start_hour,start_min,start_sec,end_hour,end_min,end_sec,secondes,minutes,hour,day;
scanf("Dia %d", &start_day);
scanf("%d : %d : %d\n",&start_hour, &start_min, &start_sec);
scanf("Dia %d", &end_day);
scanf("%d : %d : %d",&end_hour, &end_min, &end_sec);
day=end_day-start_day;
secondes=end_sec-start_sec;
minutes=end_min-start_min;
hour=end_hour-start_hour;
if(secondes<0){
    secondes+=60;
    minutes-=1;
}
if(minutes<0){
    minutes+=60;
    hour-=1;
}
if(hour<0){
    hour+=24;
    day-=1;
}
printf("%d dia(s)\n",day);
printf("%d hora(s)\n",hour);
printf("%d minuto(s)\n",minutes);
printf("%d segundo(s)\n",secondes);


}
