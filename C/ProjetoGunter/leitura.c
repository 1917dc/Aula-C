#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    fazer um programa que lê arquivos em .csv e cria outro arquivo em .txt chamado relatório
    * esse programa de relatório vai ler os dados e separar cada tipo de dado, e "rankeando".
*/

typedef struct{
    int idVendedor;
    int idVenda;
    int idEquipe;
    float valVenda;
    char *cargo;
    char *nome;

} pessoa;

int main(int argc, char *argv[]){
    char *buffer;
    int t = 0;
    char c;

    FILE *arquivo = fopen("vendas.csv", "r");

    if(arquivo == NULL){
    printf("Erro ao abrir arquivo.\n");
    return 1;
    }

    while(!feof(arquivo)){
        c = fgetc(arquivo);
        t++;
    }

    buffer = malloc(t * sizeof(char));

    fread(&buffer, sizeof(char), t, arquivo);
    printf("%s", buffer);
    printf("\n");

    

}

