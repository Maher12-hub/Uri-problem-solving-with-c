#include<stdio.h>

int main(){
int x,y,sum=0,i,a;
scanf("%d",&x);
scanf("%d",&y);
if(x>y){
        a=x;
        x=y;
        y=a;

}

  for(i=x+1;i<y;i++){
    if(i%2==1 || i%2==-1) sum+=i;
  }



printf("%d\n",sum);
}
