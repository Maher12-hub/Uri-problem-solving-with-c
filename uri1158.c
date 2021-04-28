#include<stdio.h>
int main(){
int n,x,y,sum=0,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d %d",&x,&y);
	for(j=1;j<=y;j++){
		if(x%2==0) x++;
		if(x%2!=0) sum+=x;
	x++;

	}
	printf("%d\n",sum);
	sum=0;
}


}
