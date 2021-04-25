#include<stdio.h>
int main(){
int a,b=4,alcohol=0,gasolina=0,diesel=0;
while(b==4){
	do{
		scanf("%d",&a);
	}while(a!=1&&a!=2&&a!=3&&a!=4);
	if(a==1) alcohol+=1;
	if(a==2) gasolina+=1;
	if(a==3) diesel+=1;
	if(a==4) b=5;
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",alcohol);
printf("Gasolina: %d\n",gasolina);
printf("Diesel: %d\n",diesel);
return 0;
}
