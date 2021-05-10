#include<stdio.h>
int main(){
int n,i,a=6;
scanf("%d",&n);
if(n%2==0) {
 n+=1;
 printf("%d\n",n);
 n+=2;
 a=5;

}
for(i=1;i<=a;i++){
    printf("%d\n",n);
    n+=2;

}


}
