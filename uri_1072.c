#include<stdio.h>
int main(){
int n,x,count_in=0,count_out=0;
scanf("%d",&n);
int i;
for(i=1;i<=n;i++){
    scanf("%d",&x);
    if(x>=0 && x<=20) count_in+=1;
    else count_out+=1;
}
printf("%d in\n",count_in);
printf("%d out\n",count_out);

}
