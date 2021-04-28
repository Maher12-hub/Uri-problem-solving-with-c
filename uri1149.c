#include<stdio.h>
int main(){
int a,n,x=0,sum=0,i;

scanf("%d %d",&a,&n);
while(n<0 || n==0) scanf("%d",&n);
for(i=1;i<=n;i++){
	sum+=a;
	a++;
}
printf("%d\n",sum);

return 0;


}
