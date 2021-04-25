#include<stdio.h>
int main(){
int i,j,n,a,b,c;
scanf("%d",&n);
for(i=1;i<=n;i++){

	for(j=1;j<=3;j++){
		if(j==1) a=i;
        if(j==2) b=i*i;
        if(j==3) c=i*i*i;

	}
	printf("%d %d %d\n",a,b,c);
	a=1;
	b=1;
	c=1;
}
return 0;


}
