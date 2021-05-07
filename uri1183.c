#include<stdio.h>
int main(){
int i,j,n;
float sum=0,avg=0,count=0;
char o[2];
float arr[3][3];
scanf("%s",&o);
for(i=0;i<3;i++){
	for(j=0;j<3;j++) {
		scanf("%f",&arr[i][j]);
		if(j>i){
				sum+=arr[i][j];
		count+=1;
		}
	}
}
if(o[0]=='S') printf("%.1f\n",sum);
else if(o[0]=='M') {
	avg=sum/count;
	printf("%.1f\n",avg);
}
return 0;
}
