#include<stdio.h>
int main(){
int x,z,sum=0,count=0,i;
scanf("%d",&x);
scanf("%d",&z);
while(z<x || z==x) scanf("%d",&z);
for(i=x;i<=z;i++){
	sum+=i;
	count+=1;
	if(sum>z) break;
}
printf("%d\n",count);
return 0;

}
