#include<stdio.h>

int main(){

    double salario, aumento, aux1;
    int aux;
    scanf("%lf", &salario);
        aux1 = salario;
    if (salario>0 && salario<=400){

        salario =  salario *1.15;
        aumento = aux1*0.15;
        aux =  15 ;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %d %\n", aux);
    }
     else if (salario>400 && salario<=800){

        salario =  salario *1.12;
        aumento = aux1*0.12;
        aux =  12 ;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %d %\n", aux);
    }
     else if (salario>800 && salario<=1200){
        salario =  salario *1.10;
        aumento = aux1*0.10;
        aux =  10 ;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %d %\n", aux);
    }
     else if (salario>1200 && salario<=2000){
        salario =  salario *1.07;
        aumento = aux1*0.07;
        aux =  7 ;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %d %\n", aux);
    } else {
        salario =  salario *1.04;
        aumento = aux1*0.04;
        aux =  4;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %d %\n", aux);

    }


    return 0;
}


