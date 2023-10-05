/*
1. Troco
Neste exercício você fará um programa que calcula a quantidade de troco que um
cliente deve receber. Seu programa se chamará “troco” e receberá como argumentos de
linha de comando o valor da compra e a quantia de dinheiro recebida. O argumento “-v”
corresponde ao valor da venda e o argumento “-r” corresponde à quantia de dinheiro
recebida. Seu programa deve retornar uma mensagem de erro caso o usuário não digite os
parâmetros, bem como retornar o código de erro apropriado para o sistema operacional e
sair do programa. O Programa deve funcionar mesmo se o usuário inverter a ordem dos
parâmetros. Exemplo de casos que seu programa deve respeitar:

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int verificarPar(int argc, char *argv[]);
int verificarValor(int argc, char *argv[]);

int main(int argc, char *argv[]){

    // V = VENDA
    // R = VALOR RECEBIDO

    int indiceV, indiceR;
    float troco = 0, preco = 0, recebido = 0;

// verificar parametros:

    if(!verificarPar(argc, argv)){
        printf("Informe os parâmetros -v e -r\n");

        return 1;
    }


// verificar onde estão localizados os argumentos "-v" e "-r" do código

    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-v") == 0){
            indiceV = i;
        }
        if(strcmp(argv[i], "-r") == 0){
            indiceR = i;
        }
    }

// pega os valores inseridos em cada parte do código

    for(int i = (indiceV + 1); i < (indiceV + 2); i++ ){
        preco += atof(argv[i]);
    }

    for(int i = (indiceR + 1); i < (indiceR + 2); i++ ){
        recebido += atof(argv[i]);
    }

// analisa se o valor é suficiente

    if(preco > recebido){
        printf("O valor fornecido não é o sufuciente.\n");
        return 1;
    }


// valor de notas e moedas

int notas[6] = {0,0,0,0,0,0};
float notasIndex[6] = {2,5,10,20,50,100};

int moedas[6] = {0,0,0,0,0,0};
float moedasIndex[6] = {0.01,0.5,0.10,0.25,0.50,1};


// analise de troco

troco = (recebido - preco);

while(troco > 0){
    if(troco >= 100){
        notas[5]++;
        troco -= 100;
    } else if(troco >= 50){
        notas[4]++;
        troco -= 50;
    } else if(troco >= 20){
        notas[3]++;
        troco -= 20;
    } else if(troco >= 10){
        notas[2]++;
        troco -= 10;
    } else if(troco >= 5){
        notas[1]++;
        troco -= 5;
    } else if(troco >= 2){
        notas[0]++;
        troco -= 2;
    } else if(troco >= 1){
        moedas[5]++;
        troco -= 1;
    } else if(troco >= 0.5){
        moedas[4]++;
        troco -= 0.5;
    } else if(troco >= 0.25){
        moedas[3]++;
        troco -= 0.25;
    } else if(troco >= 0.10){
        moedas[2]++;
        troco -= 0.10;
    } else if(troco >= 0.05){
        moedas[1]++;
        troco -= 0.05;
    } else if(troco >= 0.01){
        moedas[0]++;
        troco -= 0.01;
    }

}

troco = (recebido - preco);

// determina o valor do troco

    for(int i = 0; i < 6; i++){
        printf("[%i] - Notas de %2.f\n", notas[i], notasIndex[i]);
    }
    printf("\n-----------------------------------------------------\n");
    for(int i = 0; i < 6; i++){
        printf("[%i] - Moedas de %.2f\n", moedas[i], moedasIndex[i]);
    }

    return 0;
}

int verificarPar(int argc, char *argv[]){
    int verV = 0, verR = 0;

    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-v") == 0){
            verV++;
        }
        if(strcmp(argv[i], "-r") == 0){
            verR++;
        }
    }
    return verV, verR;
}

int verificarValor(int argc, char *argv[]){
    int verV, verR;
    int indiceV, indiceR;

    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-v") == 0){
            indiceV = i;
        }
        if(strcmp(argv[i], "-r") == 0){
            indiceR = i;
        }
    }

    for(int i = (indiceV + 1); i < (indiceV + 2); i++){
        if(isdigit(argv[i]) == 1){
            verV++;
        }
    for(int i = (indiceR + 1); i < (indiceR + 2); i++)
        if(isdigit(argv[i]) == 1){
            verR++;
        }
    }

    return verV, verR;
}

