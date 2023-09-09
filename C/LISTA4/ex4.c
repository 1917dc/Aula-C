/*
lista de compras:
- exibir itens
exibe os itens da lista com o indice respectivamente
- adicionar itens
permite criar um novo item e adicionar esse item na lista
com um limite de 10 itens, caso esteja cheia avise
- remover itens
permite remover itens a partir do indice da lista, entre 1 e a quantidade de itens da lista
caso o item seja invalido exiba uma mensagem de erro
- sair


*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int opcoes();

int main(){
    char lista[10][100];
    int programa = 1;
    char opcao;
    int item;

    
    printf ("Qual opção deseja selecionar?\n");
    printf ("a - exibir carrinho.\n");
    printf ("b - adicionar item.\n");
    printf ("c - remover item.\n");
    printf ("d - sair.\n");
    scanf("%c", &opcao);

    while (programa == 1){
        if (opcao == 'a'){
            

        }
        if (opcao == 'b'){
            for (int i = 0; i < 10; i++){
                printf("\n%i - %s", i + 1, lista[i]);
            }
            printf("\nDigite o índice do item no qual deseja adicionar: ");
            scanf("%i", &item);
            item = item - 1;
            while (getchar() != '\n');
            printf("\nDigite o nome do item %i: ", item + 1);
            fgets(lista[item], sizeof(lista[item]), stdin);
            printf("O item %s foi adicionado na lista!\n", lista[item]);
            for (int i = 0; i < 10; i++){
                printf("\n%i - %s", i + 1, lista[i]);
            }
        }

    }    

}

int opcoes(){
    char opcao;

    printf ("Qual opção deseja selecionar?\n");
    printf ("a - exibir carrinho.\n");
    printf ("b - adicionar item.\n");
    printf ("c - remover item.\n");
    printf ("d - sair.\n");
    scanf("%c", &opcao);

    return opcao;

}