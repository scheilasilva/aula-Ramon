#include<stdio.h>
int main(){
    float salarioBase, salarioAReceber;
    printf("digite o salario base do funcionario: $");
    scanf("%F%*c", &salarioBase);

    float gratificacao = salarioBase  *5/100;
    float imposto = salarioBase - (salarioBase - salarioBase *7/100);
    salarioAReceber= salarioBase + gratificacao - imposto;

    printf("salario a receber: $%.2f \n", salarioAReceber);
    return 0;

}