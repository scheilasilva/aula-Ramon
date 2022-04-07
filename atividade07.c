#include<stdio.h>
int main(){
    float salarioBase, salarioAreceber;
    printf("digite o salario base do funcionario: $");
    scanf("%F%*C", &salarioBase);

    float imposto= salarioBase -(salarioBase -(salarioBase *10/100));
     salarioAreceber = salarioBase + 50 - imposto;
      printf("salario a receber $%.2f\n ",salarioAreceber );
      return 0;
}