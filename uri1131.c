#include<stdio.h>
int main(){
int a,b,x=1,inter=0,gremio=0,empates=0,grenais=0;
while(x==1){
	scanf("%d %d",&a,&b);
	grenais+=1;
	if(a>b) inter+=1;
	if(b>a) gremio+=1;
	if(a==b) empates+=1;
	do{
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&x);
	}while(x!=1 && x!=2);

}
printf("%d grenais\n",grenais);
printf("Inter:%d\n",inter);
printf("Gremio:%d\n",gremio);
printf("Empates:%d\n",empates);
if(inter>gremio) printf("Inter venceu mais\n");
else printf("Gremio venceu mais\n");

}
