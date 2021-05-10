#include<stdio.h>
#include<math.h>
int main(){
int count=0,n;
int i=1;
while(i<=5){

    scanf("%d",&n);
    n=abs(n);
    if(n%2==0) {

            count+=1;
    }
    i++;
}
printf("%d valores pares\n",count);

}
