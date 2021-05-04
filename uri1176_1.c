#include<stdio.h>
int main(){
int i,n,x;
int arr[61];
arr[0]=0;
arr[1]=1;
for(i=2;i<61;i++){
	arr[i]=arr[i-1]+arr[i-2];
}
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&x);
	printf("Fib(%d) = %d\n",x,arr[x]);
}

}
