#include<stdio.h>
#include<math.h>
int main(){
int x,y,i,j,count=0,z,a,b,c;
scanf("%d %d",&x,&y);
for(i=1;i<=y;i++){

count+=1;
if(count==x || i==y){
	printf("%d",i);
	printf("\n");
	count=0;
continue;
}
printf("%d ",i);

}
return 0;

}
