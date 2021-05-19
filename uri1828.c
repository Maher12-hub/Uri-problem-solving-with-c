#include<stdio.h>
#include<string.h>
int main(){
int t,i;
char sheldon[20],raj[20];
char scissors[10]="tesoura",paper[10]="papel",rock[10]="pedra",lizard[10]="lagarto",spock[10]="Spock";
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%s %s",&sheldon,&raj);
    if(strcmp(sheldon,raj)==0) printf("Caso #%d: De novo!\n",i);
    else if(strcmp(sheldon,scissors)==0 && strcmp(raj,paper)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,paper)==0 && strcmp(raj,rock)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,rock)==0 && strcmp(raj,lizard)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,lizard)==0 && strcmp(raj,spock)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,spock)==0 && strcmp(raj,scissors)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,scissors)==0 && strcmp(raj,lizard)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,lizard)==0 && strcmp(raj,paper)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,paper)==0 && strcmp(raj,spock)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,spock)==0 && strcmp(raj,rock)==0) printf("Caso #%d: Bazinga!\n",i);
    else if(strcmp(sheldon,rock)==0 && strcmp(raj,scissors)==0) printf("Caso #%d: Bazinga!\n",i);
    else printf("Caso #%d: Raj trapaceou!\n",i);



}
return 0;

}
