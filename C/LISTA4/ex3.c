#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vogal(char *s);

int main(){
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int frasecont = vogal(frase);

    printf("A quantidade de vogais da frase é: %i\n", frasecont);

    return 0;

}

int vogal(char *s){
    int cont = 0;

    for (int i = 0; i < strlen(s); i++){
        switch(tolower(s[i])){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cont++;
        }
    }
    return cont;
}