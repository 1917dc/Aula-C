#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char id[100];
    int *idEq;
    int *idVenda;
    char *nome;
    char *cargo;
    float *valVenda;
}pessoa;

int main(){
    char linha[1024];
    char *lido = malloc(sizeof(char));
    int t = 0;
    pessoa *venda;

    while((fgets(linha, sizeof(linha), stdin)) != NULL){
        t += strlen(linha);
        lido = realloc(lido, sizeof(char) * (t + 1));
        strcat(lido, linha);
    }
    printf("%s", lido);

    char *token;
    char comma[] = ",";
    int x = 0;
    int y = 0;

    printf("\n");

    //while(token != NULL){
    for(y = 0; y < 12; y++){
        if(x == 0){
            token = strtok(lido, comma);
            x++;
            printf("%s\n", token);
        }
        if(x == 1){
            token = strtok(NULL, comma);
            x++;
            printf("%s\n", token);
        }
        if(x == 2){
            token = strtok(NULL, comma);
            x++;
            printf("%s\n", token);
        }
        if(x == 3){
            token = strtok(NULL, comma);
            x++;
            printf("%s\n", token);
        }
        if(x == 4){
            token = strtok(NULL, comma);
            x++;
            printf("%s\n", token);
        }
        if(x == 5){
            token = strtok(NULL, comma);
            atof(token);
            x++;
            y++;
            printf("%s\n", token);
        }
    }

   // }



    return 0;
}

    /*
    usar strtok para pegar os dados entre as virgulas, passando 
    parametro NULL para continuar na mesma linha.

        usar ifs para cada tipo de dado
        strtok(linha, ",");
        para pegar outro dado:
        strtok(NULL, ",");

        usar variável COLUNA, para definir os tipos de dados
            EX: Coluna 0 fica o id do vendedor
                coluna 1 fica o nome
        ou seja, if(coluna == 0) posso afirmar que o id do vendedor está ali
        e posso definir no struct
    */