#include <stdio.h>
#include <string.h>

/*
Crie um programa que obtenha informações de alunos para calcular
médias. O menu do programa têm as seguintes opções:
1 - Adicionar um aluno;
2 - Calcular média de notas de um aluno(busca pelo nome);
3 - Sair;
As informações de cada aluno são:
- Nome;
- Notas(quantas o usuário quiser informar);
*/

void limpaBuffer();

int main(){
    int programa = 1;
    int opcao;
    int indiceAluno = 0;
    char nomes[10][50];
    float notas[10][50];
    float media[10];


    while(opcao != 3){
        printf("Digite uma das opções: ");
        scanf("%i", &opcao);
        printf("\n");
        limpaBuffer();

        if(opcao == 1){
            int indiceNotas = 0;
            char sOUn = 's';
            float accNotas = 0;
            printf("Informe o seu nome: ");
            fgets(nomes[indiceAluno], sizeof(nomes[indiceAluno]), stdin);
            while(sOUn == 's'){
                printf("Informe uma nota: ");
                scanf("%f", &notas[indiceAluno][indiceNotas]);
                printf("Deseja informar mais notas? ");
                limpaBuffer();
                sOUn = getchar();
                accNotas += notas[indiceAluno][indiceNotas];
                indiceNotas++;

            }
            media[indiceAluno] = accNotas / indiceNotas;
            indiceAluno++;
        }
        if(opcao == 2){
            char busca[50];
            int indiceBusca = -1;

            printf("Informe um nome para buscar: ");
            fgets(busca, sizeof(busca), stdin);

            for(int i = 0; i < indiceAluno; i++){
                if(strcmp(busca, nomes[i]) == 0){
                    indiceBusca = i;                
                }
                if(indiceBusca != -1){
                    printf("O aluno %s tem média %f", nomes[indiceBusca], media[indiceBusca]);
                } else {
                    printf("Aluno não encontrado! ");
                }
                printf("\nPressione ENTER");
                getchar();
            }
        }
        if(opcao == 3){

        }
    }
}

void limpaBuffer(){
    while(getchar() != '\n');
}