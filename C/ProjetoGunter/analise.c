#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *id;
    char *idEq;
    char *idVenda;
    char *nome;
    char *cargo;
    float valVenda;
}pessoa;

int main(){
    char linha[1024];
    char *lido = malloc(sizeof(char));
    int t = 0;

//alocar memoria para depois realocar
    pessoa *dados = malloc(sizeof(pessoa));
    char comma[] = ",";

//para aramzenar a quantidade de pessoas e separar os dados
    int i = 0;
    while((fgets(linha, sizeof(linha), stdin)) != NULL){
        t += strlen(linha);
        lido = realloc(lido, sizeof(char) * (t + 1));
        strcat(lido, linha);
    }
    printf("%s", lido);

    return 0;
}