#include<stdio.h>
int main(){
int x=0,i,sum=0;
while(x==0){
	scanf("%d",&x);
	if(x==0) break;
	for(i=1;i<=5;i++){
		if(x%2!=0) x++;
		if(x%2==0) sum+=x;
		x++;
	}
	printf("%d\n",sum);
	x=0;
	sum=0;


}

}
