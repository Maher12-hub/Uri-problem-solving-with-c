#include<stdio.h>
int main(){
int arr[20],arr1[20],i,j;
for(i=0;i<20;i++){
	scanf("%d",&arr[i]);

}
for(i=0,j=19;j>=0;j--,i++){

	arr1[i]=arr[j];
}
for(i=0;i<20;i++){
	printf("N[%d] = %d\n",i,arr1[i]);
}

return 0;
}
