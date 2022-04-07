#include <stdio.h>

float main() {
    int nota1, nota2, nota3, media;
    printf("digite o valor de nota1:\n");
    scanf("%f%*c",&nota1);
    printf("digite o valor de nota2:\n");
    scanf("%f%*c",&nota2);
    printf("digite o valor de nota3:\n");
    scanf("%f%*c",&nota3);
    media= (nota1+nota2+nota3)/3;
    printf("a media é:%.2f\n",media);


}