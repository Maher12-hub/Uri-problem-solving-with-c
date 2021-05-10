#include<stdio.h>
int main(){
int start_hour,end_hour,start_min,end_min,hour,minutes;
scanf("%d %d %d %d",&start_hour,&start_min,&end_hour,&end_min);
hour=end_hour-start_hour;
minutes=end_min-start_min;
if(hour<0){
    hour=((24-start_hour)+end_hour);

}
if(minutes<0) {
    minutes=((60-start_min)+end_min);
    hour--;
}
if((start_hour==end_hour)&&(start_min==end_min)){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}
else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);



}
