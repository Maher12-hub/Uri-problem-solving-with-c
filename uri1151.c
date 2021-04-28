#include<stdio.h>
int main(){

int a=0,b=1,c,i,n;
c=a+b;
scanf("%d",&n);
printf("%d %d ",a,b);

for(i=1;i<=n-2;i++){
	if(i==(n-2)){
		printf("%d\n",c);
		break;
	}
	printf("%d ",c);
	a=b;
	b=c;
	c=a+b;
}
return 0;
}
