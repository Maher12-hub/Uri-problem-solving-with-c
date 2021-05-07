#include<stdio.h>
int main(){
int n,i=0,j,k;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
 int min_value=arr[0];
 int pos=0;
for(j=0;j<n;j++){
		if (arr[j]<min_value) {
			min_value=arr[j];
			pos=j;
		}

		}


    printf("Menor valor: %d\n",min_value);
	printf("Posicao: %d\n",pos);
	return 0;

}
