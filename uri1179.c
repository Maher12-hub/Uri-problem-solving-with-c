#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,j,k=0,l=0;
int arr_even[5];
int arr_odd[5];
for(i=0;i<=14;i++){
	scanf("%d",&n);
	if(n%2==0) {
		arr_even[k]=n;
		k++;
	}
	else if (n%2 !=0) {
		arr_odd[l]=n;
		l++;
	}
	if(k>4) {

		for(j=0;j<=4;j++) {
				printf("par[%d] = %d\n",j,arr_even[j]);
				arr_even[j]=0;
		}
		k=0;
	}

	if(l>4) {

		for(j=0;j<=4;j++){
				printf("impar[%d] = %d\n",j,arr_odd[j]);
				arr_odd[j]=0;
		}
	l=0;
	}


}
for(i=0;i<=4;i++){
	if(arr_odd[i]==0) break;
	printf("impar[%d] = %d\n",i,arr_odd[i]);
}
for(i=0;i<=4;i++){
	if(arr_even[i]==0) break;
	printf("par[%d] = %d\n",i,arr_even[i]);
}
return 0;

}



