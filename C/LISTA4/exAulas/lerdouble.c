#include <stdio.h>
#include <stdlib.h>

double* leiaDouble(double *num);


int main(){
    double lerDouble;
    double *ptr = &lerDouble;

    leiaDouble(ptr);

    printf("\n%.2lf", *ptr);
    
}

double* leiaDouble(double *num){
    printf("Digite um número: ");
    scanf("%lf", num);

    return num;
}