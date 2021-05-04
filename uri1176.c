#include<stdio.h>
int main(){
int n,x,i,j;
long long int c;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&x);
	if(x==0){
			printf("Fib(%d) = %d\n",x,x);
	        continue;
	}
	if(x==1) {
		printf("Fib(%d) = %d\n",x,x);
		continue;
	}
	int a=0,b=1,c=0;
	for(j=1;j<x;j++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("Fib(%d) = %lld\n",x,c);


}

}
