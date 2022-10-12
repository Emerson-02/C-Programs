/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 06 / EXERCÍCIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <DESCRIÇÃO DO PROGRAMA>
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAMANHO_F 8
#define TAMANHO_C 3
int main() {
    char frase[TAMANHO_F];
    char carac[2];
    char frase2[TAMANHO_F];
    int i;

    printf("Informe uma string: ");
    fgets(frase, TAMANHO_F, stdin);

    printf("Informe o caracter a ser removido da string: ");
    fgets(carac, 2, stdin);

    //for(i = 0; i < TAMANHO_F && frase[i] == '\0)'; i++){
       // if(carac[0] != i){
        //    frase2[i], frase[i];
       // }
   // }

  //  if(frase != frase2){
   //     printf("A string original sem o caractere [%s]\n", carac);
    //}

    //printf(frase);

    printf(carac);


    return 0;
}
