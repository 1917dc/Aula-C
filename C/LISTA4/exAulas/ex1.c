#include <stdio.h>

/*
Exercício 1: Calculadora Simples
Crie um programa que permita ao usuário realizar operações aritméticas simples, como adição, subtração, multiplicação e divisão. 
O programa deve aceitar dois números e uma operação como entrada e fornecer o resultado como saída. 
Utilize funções para a execução das operações.
*/

void limpa();
float subtração(), divisão(), soma(float a, float b), multiplicação();

int main(){
    int programa;
    char opcao;
    float a, b;

    printf("Digite uma opção: \n");
    printf(" a - soma\n b - subtração\n c - divisão \n d - multiplicação \n e - sair \n");
    opcao = getchar();
    while(opcao != 'e'){
        if(opcao == 'a'){
            printf("Digite o primeiro número: ");
            scanf("%f", &a);
            printf("Digite o segundo número: ");
            scanf("%f", &b);

            printf("%.2f", soma(a, b));
        }
        if(opcao == 'b'){

        }
        if(opcao == 'c'){

        }
        if(opcao == 'd'){

        }
    }

}

void limpa(){
    while(getchar() != '\n');

}

float soma(float a, float b){
    return a + b;
}

