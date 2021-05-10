#include<stdio.h>
int main(){
int start,end,hours;
scanf("%d %d",&start,&end);
if(start>end) {
    hours=((24-start)+ end);
    printf("O JOGO DUROU %d HORA(S)\n",hours);
}
if(end>start){
    hours=end-start;
    printf("O JOGO DUROU %d HORA(S)\n",hours);
}
if(start==end) printf("O JOGO DUROU 24 HORA(S)\n");


}
