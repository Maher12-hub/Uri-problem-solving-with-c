#include<stdio.h>
#include<string.h>
int main(){
int  i,j,n;
char T[2];
float sum=0;
float avg=0;

float arr[3][3];
scanf("%d",&n);
scanf("%s",&T);

for(i=0;i<3;i++){
	for(j=0;j<3;j++) scanf("%f",&arr[i][j]);
}

for(j=0;j<3;j++) {
	sum+=arr[n][j];
}
if(T[0]=='S') printf("%.1f\n",sum);

else if(T[0]=='M'){
		avg=sum/3;
		printf("%.1f\n",avg);
}
return 0;
}
