#include<stdio.h>
int main(){
double a,b,c;
scanf("%lf %lf %lf",&a,&b,&c);
double area,perimeter;
if((a+b>c)&&(a+c>b)&&(b+c>a)){
        perimeter=a+b+c;
printf("Perimetro = %.1lf\n",perimeter);

}
else{
    double sum=a+b;
    area=(sum*c)/2;
    printf("Area = %.1lf\n",area);
}

}
