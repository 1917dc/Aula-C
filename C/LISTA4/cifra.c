#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int verParametros(int argc, char *argv[]);

int main(int argc, char *argv[]){
    int indiceK, indiceC = 0, indiceV;
    int existeC, chave, flagCript;
    char frase[200];

    if(!verParametros(argc, argv)){
        printf("Informe o -k e o -v");
        return 1;
    }
    // vai vasculhar procurando os argumentos
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-k") == 0){
            indiceK = i;
        }
        if(strcmp(argv[i], "-v") == 0){
            indiceV = i;
        }
        if(strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "-u") == 0){
            indiceC = i;
        }
    }

    existeC = indiceC;
//ascii to int
    chave = atoi(argv[indiceK + 1]);
    if(existeC){
        for(int i = (indiceV + 1); i < indiceC; i++){
            strcat(frase, argv[i]);
            strcat(frase, " ");
        }

    flagCript = strcmp(argv[indiceC], "-c") == 0;
    for(int i = 0; i < strlen(frase); i++){
        if(isalpha(frase[i])){
            if(flagCript){
                frase[i] += chave;
            } else {
                frase[i] -= chave;
            }
        }

    }

    } else {

        for(int i = (indiceV + 1); i < argc; i++){
            strcat(frase, argv[i]);
            strcat(frase, " ");
        }

        for(int i = 0; i < strlen(frase);i++){
            if(isalpha(frase[i])){
                frase[i] += chave;
            }
        }

    }

    printf("%s\n", frase);

    return 0;
}

int verParametros(int argc, char *argv[]){
    int possuiK = 0, possuiV = 0;
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-k") == 0){
            possuiK = 1;
        }
        if(strcmp(argv[i], "-v") == 0){
            possuiV = 1;
        }
    }

    return possuiK, possuiV;
}