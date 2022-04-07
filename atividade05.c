#include<stdio.h>
int main(){
    float salario, novoSalario, aumento;
    int percentualAumento;
    printf("salario: $");
    scanf("%f%*c", &salario);
    printf("percentualAumento: ");
    scanf("%d%*c", &percentualAumento);

    aumento= salario + percentualAumento/100;
    novoSalario = salario + aumento;

    printf("valor do aumento: $%D\n", aumento);
    printf("Novo salario %.f\n",novoSalario);
    return 0;

}