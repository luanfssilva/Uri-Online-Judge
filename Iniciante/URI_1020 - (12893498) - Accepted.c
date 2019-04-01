#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int ano = 0, mes = 0, dia = 0;
    int dias;

    scanf("%d",&dias);

    ano = dias/365;
    mes = (dias%365)/30;
    dia = (dias%365)%30;

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
 
    return 0;
}