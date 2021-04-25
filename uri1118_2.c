#include<stdio.h>
int main(){
float a,b,avg;
int x=1;
while(x==1){
	do{
		scanf("%f",&a);
		if(a<0 || a>10) printf("nota invalida\n");
	}while(a<0 || a>10);
	do{
		scanf("%f",&b);
		if(b<0 || b>10) printf("nota invalida\n");

	}while(b<0 || b>10);
    avg=(a+b)/2;
	printf("media = %.2f\n",avg);
	do{
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&x);
	}while(x!=1&&x!=2);
	avg=0;
}
return 0;
}

