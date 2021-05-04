#include<stdio.h>
int main(){
int n,x,i,j,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
		scanf("%d",&x);
for(j=1;j<x;j++){
	if(j==1) continue;
	else if(x%j==0) {
			count+=1;


	}
	}
	if(count>0) printf("%d nao eh primo\n",x);
	else printf("%d eh primo\n",x);
	count=0;



}
return 0;

}
