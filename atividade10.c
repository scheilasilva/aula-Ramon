#include<stdio.h>
#define PI 3.14
int main(){
    int raio;
    printf("raio do circulo");
    scanf("%d%*c",&raio);
    float areaCirculo = PI * (raio*raio);
    printf("O a area do circulo é %.1f\n",areaCirculo);

}