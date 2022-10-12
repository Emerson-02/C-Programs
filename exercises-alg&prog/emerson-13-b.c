/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 13 / EXERC�CIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <PROGRAMA QUE SOLICITA O NOME DE UM ARQUIVO TEXTO E UMA PALAVRA
     A SER ENCONTRADA, O PROGRAMA BUSCAR� PELA PALAVRA FRASE POR FRASE,
     E SE ACHAR,IMPRIME NA TELA A FRASE E O N�MERO DA LINHA DA FRASE,
     E AP�S ISSO, IMPRIME O N�MERO DE VEZES EM QUE A PALAVRA FOI ENCONTRADA EM ALGUMA FRASE>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
#define LIN 300


int main(){
    // ARQUIVO
    FILE *arq;
    //VARI�VEIS
    char arquivo[TAM];
    char palavra[TAM];
    char linha[LIN];
    char *result;
    char *p;
    int i = 1;
    int k = 0;
    // SOLICITA O NOME DO ARQUIVO
    printf("Informe o nome do arquivo: ");
    scanf("%s", &arquivo);
    // SOLICITA A PALAVRA A SER ENCONTRADA
    printf("Informe a palavra a ser encontrada: ");
    scanf("%s", &palavra);
    printf("\n");
    // ABRE O ARQUIVO
    arq = fopen(arquivo, "r");
    // SE O ARQUIVO FOR NULL, RETORNA UMA MENSAGEM DE ERRO
    if (arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }
      // ENQUANTO O ARQUIVO N�O TERMINAR
      while (!feof(arq))
      {
          // L� UMA LINHA DO ARQUIVO
          result = fgets(linha, LIN, arq);
          // PROCURA A PALAVRA SOLICITADA NA LINHA
          p = strstr(result, palavra);
          // SE A PALAVRA FOI ENCONTRADA
          if (p){
            // IMPRIME A LINHA JUNTO DO N�MERO DA LINHA
            printf("[Linha %d] : %s", i, result);
            // INCREMENTA O k
            k++;
          }
          // INCREMENTA O i
          i++;
      }
    printf("\n\nForam encontradas %d ocorrencias de %s no arquivo %s\n", k, palavra, arquivo);
    // FECHA O ARQUIVO
    fclose(arq);
    return 0;
}
