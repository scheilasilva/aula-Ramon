#include<stdio.h>
int main(){
    float base, altura, area;
    printf("base do triangulo:");
    scanf("%F%*C", &base);
    printf("altura do triangulo:");
    scanf("%F%*C", &altura);
    area=( base* altura)/2;
    printf("a area do triangulo com base de %.fm e altura %.1fm é igual a: %.1f\n", base, altura, area);
    return 0;


}