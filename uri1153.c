#include<stdio.h>
int main(){

int n,i,sum=1;
scanf("%d",&n);
for(i=n;i>=1;i--){
		sum*=i;

}
printf("%d\n",sum);
}
