#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verificacao();

int main(int agrc, char *argv[]){
    verificacao();
}

int verificacao(){
    int tam;
    char senha[20];

    printf("Digite uma senha: ");
    scanf("%s", senha);
    int mai = 0, min = 0, num = 0; 

    if(strlen(senha) < 8){
        printf("A sua senha deve ter pelo menos 8 caracteres.\n");
    }
    for(int i = 0; i < strlen(senha); i++){
        if(isupper(senha[i]) > 1){
            mai++;
        }
        if(islower(senha[i]) > 1){
            min++;
        }
        if(isdigit(senha[i]) > 1){
            num++;
        }
    }
    if(mai > 0 && min > 0 && num > 0){
        printf("A sua senha é válida!\n");
    } else {
        printf("A sua senha é inválida!\n");
    }
}