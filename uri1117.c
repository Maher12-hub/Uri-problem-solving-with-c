#include<stdio.h>
#include<math.h>
int main(){
float num,avg,sum=0;
int count=0,b=0,num1;
while(b==0){
	scanf("%f",&num);
	num1=ceil(num);
	if(num<0 || num>10) {
			printf("nota invalida\n");
	continue;
	}
	else {
		sum+=num;
		count+=1;
		if(count==2){
			avg=sum/count;
	printf("media = %.2f\n",avg);
	b=1;
		}
	}
}

return 0;

}
