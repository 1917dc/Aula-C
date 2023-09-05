#include <stdio.h>

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
    int quant;
    char decisao;
    double soma, sub, mult, div, peso[quant], nota[quant], mp, a, b;

    printf("Selecione uma das opções para fazer o cálculo: \n");
    scanf("%i", &opcao);
    if(opcao == 1){
        printf("Digite dois números para efetuar a soma: \n");
        scanf("%lf%lf", &a, &b);
        soma = a + b;
        printf("A soma dos números %lf e %lf é: %lf", a, b, soma);
    }
    if(opcao == 2){
        printf("Digite dois números para efetuar a subtração: \n");
        scanf("%lf%lf", &a, &b);
        sub = a - b;
        printf("A subtração dos números %lf e %lf é: %lf", a, b, sub);
    }
    if(opcao == 3){
        printf("Digite dois números para efetuar a divisão: \n");
        scanf("%lf%lf", &a, &b);
        div = a / b;
        printf("O resultado da divisão de %lf e %lf é: %lf\n", a, b, div);
    }
    if(opcao == 4){
        printf("Digite dois números para efetuar a multiplicação: \n");
        scanf("%lf%lf", &a, &b);
        mult = a * b;
        printf("O resultado da multiplicação entre %lf e %lf é: %lf\n", a, b, mult);
    }
    if(opcao == 5){
        
        while(programa = 1){
            for(int i = 0; i < quant; i++){
                
                printf("\nDigite a nota: \n");
                scanf("%lf", &nota[i]);
                printf("Digite o peso: \n");
                scanf("%lf", &peso[i]);
                printf("Deseja adicionar mais notas? (S ou N)\n");
                scanf("%c", &decisao);
                if(decisao == 's'){
                    programa = 1;
                } else {
                    !programa;
                }

                printf("A soma das notas foi: ");
                double resultado = resultado + (peso[i] * nota[i]);
                printf("%lf", resultado);
            }
        }
        
    }

}