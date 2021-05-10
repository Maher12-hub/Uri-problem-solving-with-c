#include<stdio.h>
int main(){
double salary,new_salary;
scanf("%lf",&salary);
if(salary>=0 && salary<=400) {
    new_salary=(15*salary)/(100);
    salary+=new_salary;
    printf("Novo salario: %.2lf\n",salary);
    printf("Reajuste ganho: %.2lf\n",new_salary);
    printf("Em percentual: 15 %%\n");
}
else if(salary>=400.01 && salary<=800) {
        new_salary=(12*salary)/(100);
    salary+=new_salary;
    printf("Novo salario: %.2lf\n",salary);
    printf("Reajuste ganho: %.2lf\n",new_salary);
    printf("Em percentual: 12 %% \n");
}
else if(salary>=800.01 && salary<=1200){
    new_salary=(10*salary)/(100);
    salary+=new_salary;
    printf("Novo salario: %.2lf\n",salary);
    printf("Reajuste ganho: %.2lf\n",new_salary);
    printf("Em percentual: 10 %% \n");
}

else if(salary>=1200.01 && salary<=2000) {
    new_salary=(7*salary)/(100);
    salary+=new_salary;
    printf("Novo salario: %.2lf\n",salary);
    printf("Reajuste ganho: %.2lf\n",new_salary);
    printf("Em percentual: 7 %%\n");
}

else if(salary>2000){
    new_salary=(4*salary)/(100);
    salary+=new_salary;
    printf("Novo salario: %.2lf\n",salary);
    printf("Reajuste ganho: %.2lf\n",new_salary);
    printf("Em percentual: 4 %%\n");
}


}
