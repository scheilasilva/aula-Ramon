#include<stdio.h>
int main(){
    float deposito, rendimento, valorTotal;
    int taxadeJuros;
    printf("valor do deposito: $");
    scanf("%f%*c", &deposito);
    printf("valor da taxa de juros:");
    scanf("%d%*c", &taxadeJuros);
    rendimento= deposito - (deposito-(deposito * taxadeJuros/100));
    valorTotal= deposito + rendimento;
    printf("o valor do rendimento é $%.2f reais e o total do valor depositado apos o rendimento ficou $%.2f reais\n, rendimento, valorTotal ");
    return 0;

}