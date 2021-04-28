#include<stdio.h>
int main(){
int x=0,a,count=0,i;
while(x==0){
	scanf("%d",&a);
	if(a==0) break;
	for(i=1;i<=a;i++){
		count+=1;
		if(count==a){
			printf("%d\n",i);
			count=0;
		}
		else printf("%d ",i);
	}
	return 0;
}

}
