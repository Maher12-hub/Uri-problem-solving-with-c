#include<stdio.h>
#include<stdlib.h>
int main(){
double a,b,c,d,e;
scanf("%lf %lf %lf",&a,&b,&c);
if(a>=b&&a>=c){
    if(b>=c){
        a=a;
        b=b;
        c=c;
    }
}
if(b>=a&&b>=c){
    if(a>=c){
        d=a;
        e=c;
        a=b;
        b=d;
        c=e;
    }
    else{
        d=c;
        e=a;
        a=b;
        b=d;
        c=e;
    }
}
if(c>=a&&c>=b){
    if(a>=b){
        d=a;
        e=b;
        a=c;
        b=d;
        c=e;
    }
    else{
        d=b;
        e=a;
        a=c;
        b=d;
        c=e;
    }
}
if(a>=b+c) {
        printf("NAO FORMA TRIANGULO\n");
        exit(0);
}
if(a*a==b*b+c*c) printf("TRIANGULO RETANGULO\n");
if(a*a>b*b+c*c) printf("TRIANGULO OBTUSANGULO\n");
if(a*a<b*b+c*c) printf("TRIANGULO ACUTANGULO\n");
if(a==b && b==c) printf("TRIANGULO EQUILATERO\n");
if((a==b || b==c)&&(a!=b || b!=c )) printf("TRIANGULO ISOSCELES\n");
}
