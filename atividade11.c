#include <stdio.h>
int main (){
    int numero;
    printf("digite o numero:");
    scanf("%d%*c",&numero);
    int aoQuadrado= pow (numero, 2 );
    int aoCubo = pow( numero, 3);
    float raizQuadrada=sqrt(numero);
    float raizCubica = cbrt (numero); 

printf("o numero %d digitado ao quadrado é: %d\n",numero, aoQuadrado);
printf("o numero %d digitado ao cubo é: %d\n ", numero, aoCubo);
printf("a raiz quadrada do numero %d é: %.2f\n ", numero, raizQuadrada );
printf("a raiz cubica do numero %d é: %.2f\n",numero, raizCubica );
return 0;
}