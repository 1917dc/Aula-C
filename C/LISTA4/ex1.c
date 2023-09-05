#include <stdio.h>

int quant;
float resultado = 0, nota, peso;
int main(){

    // 1. Implemente um programa de calculadora que ofereça as seguintes opções:
    // a. Soma (+)
    // b. Subtração (-)
    // c. Multiplicação (*)
    // d. Divisão (/)
    // e. Média Ponderada (MP)
    // Para a média ponderada, o usuário deve informar uma nota seguida do respectivo
    // peso enquanto quiser, e o programa deve calcular a média ponderada das “n” notas
    // com os “p” pesos.


    int programa = 1, cont = 1;
    int opcao;
    float soma, sub, mult, div, mp, a, b;

    printf("Selecione uma das opções para fazer o cálculo: \n");
    printf("1 - Adição.\n2 - Subtração.\n3 - Multiplicação.\n4 - Divisão.\n5 - Média ponderada de notas.\n");
    scanf("%i", &opcao);
    if(opcao == 1){
        printf("Digite dois números para efetuar a soma: \n");
        scanf("%f%f", &a, &b);
        soma = a + b;
        printf("A soma dos números %lf e %lf é: %lf", a, b, soma);
    }
    if(opcao == 2){
        printf("Digite dois números para efetuar a subtração: \n");
        scanf("%f%f", &a, &b);
        sub = a - b;
        printf("A subtração dos números %lf e %lf é: %lf", a, b, sub);
    }
    if(opcao == 3){
        printf("Digite dois números para efetuar a divisão: \n");
        scanf("%f%f", &a, &b);
        div = a / b;
        printf("O resultado da divisão de %lf e %lf é: %lf\n", a, b, div);
    }
    if(opcao == 4){
        printf("Digite dois números para efetuar a multiplicação: \n");
        scanf("%f%f", &a, &b);
        mult = a * b;
        printf("O resultado da multiplicação entre %lf e %lf é: %lf\n", a, b, mult);
    }
    if(opcao == 5){
        printf("Digite a quantidade de alunos: ");
        scanf("%i", &quant);
        for(int i = 0; i < quant; i++){
            printf("Digite a nota %i: \n", i + 1);
            scanf("%f", &nota);
            printf("Digite o peso da nota %i: \n", i + 1);
            scanf("%f", &peso);
            nota = nota * peso;
            resultado = resultado + nota;
        }
        printf("A nota final de todos os alunos foi de: %.2f\n", resultado);
    }

}