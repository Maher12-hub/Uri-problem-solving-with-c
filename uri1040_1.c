#include <stdio.h>

int main() {
double n1,n2,n3,n4;
double media;
scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
media=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
printf("Media: %.1lf\n",media);
if(media>=7) printf("Aluno aprovado.\n");
if(media<5) printf("Aluno reprovado.\n");
if(media>=5&&media<=6.9){
    printf("Aluno em exame.\n");
    double n5;
    scanf("%lf",&n5);
    printf("Nota do exame: %.1lf\n",n5);
    double recal_media=(media+n5)/2;
    if(recal_media>=5) printf("Aluno aprovado.\n");
    if(recal_media<=4.9) printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",recal_media);
}

    return 0;
}
