#include <stdio.h>
int main () {
    float salario, aumento, NovoSalario;
    printf("Digite o valor do seu salario para receber seu merecido aumento:$");
    scanf("%f%*c", &salario);
    aumento = salario * 25/100;
    NovoSalario = salario + aumento;
     printf("seu novo salario é: $%.2f\n", NovoSalario);
     return 0;
}

