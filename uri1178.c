#include<stdio.h>
int main(){
double arr[100],x;
int i;
scanf("%lf",&x);
arr[0]=x;
for(i=1;i<100;i++){
	x=x/2;
	arr[i]=x;
}
for(i=0;i<100;i++){
	printf("N[%d] = %.4lf\n",i,arr[i]);
}
return 0;

}
