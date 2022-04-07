#include <stdio.h>

int main() {
    float  nota1, nota2, nota3, media;
    float peso1, peso2, peso3, media;
    printf("digite a primeira nota1:\n");
    scanf("%f%*c", &nota1);
    printf("digite a nota2\n");
    scanf("%f%*c", &nota2);
    printf("digite a nota3\n");
    scanf("%f%*c",&nota3);
    printf("digite o peso1\n");
    scanf("%f%*c",&peso1);
    printf("digite o peso2\n");
    scanf("%f%*c",&peso2);
    printf("digite o peso3\n");
    scanf("%f%*c",&peso3);
    media=(nota1*peso1+peso2*nota2+nota3*peso3)/(peso1+peso2+peso3);
    printf("a media é :%.2f\n", media);

}