#include<stdio.h>
int main(){
int n,a,b,c,d,e,f,i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=3;j++){
		if(j==1) a=i;
		if(j==2) b=i*i;
		if(j==3) c=i*i*i;
	}
	printf("%d %d %d\n",a,b,c);
	d=b+1;
	e=c+1;
	printf("%d %d %d\n",a,d,e);
	a=1;
	b=1;
	c=1;
	d=1;
	e=1;


}
return 0;

}
