#include<stdio.h>
int main(){
double s=0,i,j;
for(i=1,j=1;i<=39;i+=2,j*=2){
	s+=i/j;
}
printf("%.2lf\n",s);

}
