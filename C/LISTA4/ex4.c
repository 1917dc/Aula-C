// ex 4 tentativa.



#include <stdio.h>
#include <string.h>

int main(){
    
    char lista[10][20] = {
        {'\0'},{'\0'},{'\0'},{'\0'},{'\0'},
        {'\0'},{'\0'},{'\0'},{'\0'},{'\0'}
        };
    char opcao;
    int pos;
    char item[10];
    int programa = 1;

    // escolha de opções

    while(programa == 1){
        printf("Digite a opção que deseja: \n");
        printf("a - ver itens\n");
        printf("b - adicionar/substituir itens.\n");
        printf("c - remover itens.\n");
        printf("d - sair.\n");

        scanf("%c", &opcao);
        if(opcao == 'a'){
            printf("A sua lista atual é: \n");
            for(int i=0; i < 10; i++){
                printf("%i - %s", i+1, lista[i]);
            }
            printf("\n");
            
        }
        if(opcao == 'b'){
            printf("Digite índice do objeto no qual deseja adicionar/substituir: ");
            scanf("%i", &pos);
            printf("Digite o nome do objeto no qual deseja adicionar/substituir: ");
            while(getchar() != '\n');
            fgets(item, 10, stdin);
            strcpy(lista[pos - 1], item);
            for(int i = 0; i < 10; i++)
                printf("%i - %s", i + 1, lista[i]);
            printf("\n");
        }
        if(opcao == 'c'){
            printf("Digite o indice do item no qual deseja remover: ");
            for(int i = 0; i < 10; i++)
                printf("%i - %s", i + 1, lista[i]);
            scanf("%i", &pos);
            for(int i = pos - 1; i < 10; i++)
                strcpy(lista[i], lista[i + 1]);
            printf("\n");
        }
        if(opcao == 'd'){
            programa = 0;
        }
    }
}