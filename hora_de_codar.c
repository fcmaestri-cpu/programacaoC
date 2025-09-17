#include <stdio.h>

int main(){

    char nome[50];
    int idade;
    int matricula;
    float altura;

    printf ("Informe seu nome: \n");
    scanf ("%s", nome);

    printf ("Informe sua idade: \n");
    scanf ("%d", &idade);

    printf ("Informe sua altura: \n");
    scanf ("%f", &altura);

    printf ("Informe sua matrícula: \n");
    scanf ("%d", &matricula);
    
    printf ("%s tem %d anos, mede %.2fm e sua matricula é %d. \n", nome, idade, altura, matricula);


}
