#include<stdio.h>
int main(){
double sum,avg,n;
int count;
int i=1;
while(i<=6){

    scanf("%lf",&n);
    if(n>0){
        count+=1;
        sum+=n;


    }
     i++;


}
   avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);
}
