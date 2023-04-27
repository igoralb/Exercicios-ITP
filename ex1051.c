#include <stdio.h>

int main() {

    double salario,imposto;
    scanf("%lf",&salario);
    double valor1 = 0;
    double valor3 = 0;
    double valor2 = 0;

    if (salario>2000 && salario <=3000){
        double taxa1 = salario - 2000;

        valor1 = taxa1 * 0.08;
        imposto = valor1+valor2+valor3;
        printf("R$ %.2lf\n", imposto);
    }
    else if (salario>3000 && salario <=4500){
        double taxa2 = salario - 3000;
        valor1 = 1000 * 0.08;
        valor2 = taxa2 * 0.18;
        imposto = valor1+valor2+valor3;
        printf("R$ %.2lf\n", imposto);
    }
    else if (salario>4500){
        double taxa3 = salario - 4500;
        valor1 = 1000 * 0.08;
        valor2 = 1500 * 0.18;
        valor3 = taxa3 * 0.28;
        imposto = valor1+valor2+valor3;
        printf("R$ %.2lf\n", imposto);
    }
    else
{
        printf("Isento\n");
    }

    return 0;
}
