#include<stdio.h>
int main(){

float a,avg,sum=0;
int i,x=1,count=0;
while(x==1){
	scanf("%f",&a);
	if(a<0 || a>10) {
		printf("nota invalida\n");
		continue;
	}
	else{
			count+=1;
			sum+=a;
	if(count==2){
		avg=sum/count;
		printf("media = %.2f\n",avg);
		count=0;
		sum=0;
		avg=0;
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d",&x);
    while (x!=1 && x!=2) scanf("%d",&x);


}
	}
}
return 0;

}

