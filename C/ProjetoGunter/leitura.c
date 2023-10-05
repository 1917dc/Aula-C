#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
    fseek(arquivo, 0, SEEK_SET);

    buffer = malloc(t * sizeof(char));

    fread(buffer, sizeof(char), t, arquivo);
    printf("%s", buffer);
    
    return 0;
}

