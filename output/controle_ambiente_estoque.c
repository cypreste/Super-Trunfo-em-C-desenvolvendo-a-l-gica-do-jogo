#include <stdio.h>
//Hora de codar, tema 2 - novato
int main () {
    //Variaveis
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    //Entrada de dados
    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade: \n");
    scanf("%f", &umidade);
    printf("Digite o estoque: \n");
    scanf("%u", &estoque);

    //Teste de temperatura
    if (temperatura > 30) {
        printf("A temperatura esta alta.\n");
    } else {
        printf("A temperatura esta dentro dos parametros.\n");
    }

    //Teste de umidade
    if (umidade > 50) {
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade dentro dos parametros.\n");
    }

    //Teste de estoque
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do minimo.\n");
    } else {
        printf("Estoque dentro dos parametros.\n");
    }   
    return 0;
    }

