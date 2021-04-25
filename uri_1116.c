#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
int a,b,c;
float d;
for(int i=1;i<=n;i++){
	scanf("%d %d",&a,&b);
	if (b==0){
			printf("divisao impossivel\n");
	}
	else if(a/b==0 || a/b!=0) {
			d=(float)a/b;
		    printf("%.1f\n",d);
	}


	else printf("divisao impossivel\n");
}

}
