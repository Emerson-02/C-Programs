/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 13 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <PROGRAMA QUE SOLICITA O NOME DE UM ARQUIVO E UMA CHAVE DE CRIPTOGRAFIA AO USUÁRIO,
     E EM SEGUIDA, PERGUNTA SE O USUÁRIO QUER CRIPTOGRAFAR OU DESCRIPTOGRAFAR O ARQUIVO,
     E ENTÃO, REALIZA O QUE FOI SOLICITADO, GUARDANDO O RESULTADO EM UM NOVO ARQUIVO CHAMADO SAIDA.txt>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int main(){
    // ARQUIVOS
    FILE *arq_entrada = NULL;
    FILE *arq_saida = NULL;
    // VARIÁVEIS
    char arquivo[TAM];
    char x, y;
    long rot;
    int crip;
    // SOLICITA O NOME DE UM ARQUIVO
    printf("Digite o nome do arquivo: ");
    scanf("%s", &arquivo);
    // SOLICITA A CHAVE DE CRIPTOGRAFIA
    printf("Informe a chave de criptografia: ");
    scanf("%ld", &rot);
    // SOLICITA O QUE DEVE SER FEITO COM O ARQUIVO
    printf("O que deseja fazer com este arquivo? [1] - Criptografar [2] - Descriptografar ");
    scanf("%d", &crip);
    // ABERTURA DOS ARQUIVOS
    arq_entrada = fopen(arquivo, "r+");
    arq_saida = fopen("SAIDA.txt", "w");
    // SE ALGUM ARQUIVO FOR NULL, RETORNA MENSAGEM DE ERRO
    if (arq_entrada == NULL || arq_saida == NULL){
        printf("Erro na abertura dos arquivos de entrada e saida.\n");
    }
    // SWITCH PARA TRANSFORMAR OS CARACTERES E GUARDAR NO NOVO ARQUIVO
    switch(crip){
    case 1:
        // ENQUANTO O CARACTER NÃO FOR O FIM DO ARQUIVO
        while ((y = fgetc(arq_entrada)) != EOF) {
                x = y;
                // SE O CARACTER FOR UM ESPAÇO EM BRANCO, TRANSFORMA EM '#'
                if(x == ' '){
                    x = '#';
                    y = x;
                }
                // SE O CARACTER FOR '!', TRANSFORMA EM '$'
                else if(x == '!'){
                    x = '$';
                    y = x;
                }
                // SE O CARACTER FOR '-', TRANSFORMA EM '0'
                else if(x == '-'){
                    x = '0';
                    y = x;
                }
                // SE O CARACTER ESTIVER ENTRE 0 E 9
                else if(x >= '0' && x <= '9'){
                    // ADICIONA O VALOR DE ROT AO X
                    x = x + rot;
                    // SE X FOR MAIOR QUE 9
                    if(x > '9'){
                        // DIMINUI 9 E DEPOIS, DIMINUI 1
                        x = x - '9' + '0' - 1;
                    }
                    y = x;
                }
                // SE FOR UMA LETRA MINÚSCULA
                else if(x >= 'a' && x <= 'z'){
                    // ADICIONA O VALOR DE ROT
                    x = x + rot;
                    // SE DER UM VALOR MAIOR QUE 'z'
                    if(x > 'z'){
                        // DIMINUI 'z', ADICIONA 'a' E DIMINUI 1
                        x = x - 'z' + 'a' - 1;
                    }
                    y = x;
                }
                // SE FOR UMA LETRA MAIÚSCULA
                else if(x >= 'A' && x <= 'Z'){
                    // ADICIONA O VALOR DE ROT
                    x = x + rot;
                    // SE DER UM VALOR MAIOR QUE 'Z'
                    if(x > 'Z'){
                        // DIMINUI 'Z', ADICIONA 'A' E DIMINUI 1
                        x = x - 'Z' + 'Z' - 1;
                    }
                    y = x;
                }
                // ESCREVE NO ARQUIVO SAIDA.txt
                fputc(y, arq_saida);
            }
        // MENSAGEM DE OPERAÇÃO CONCLUIDA
        printf("Operacao de criptografia concluida!\n");
    break;
    case 2:
        // ENQUANTO O CARACTER NÃO FOR O FIM DO ARQUIVO
        while ((y = fgetc(arq_entrada)) != EOF) {
                x = y;
                // SE O CARACTER FOR '#', TRANSFORMA EM UM ESPAÇO EM BRANCO
                if(x == '#'){
                    x = ' ';
                    y = x;
                }
                // SE O CARACTER FOR '$', TRANSFORMA EM '!'
                else if(x == '$'){
                    x = '!';
                    y = x;
                }
                // SE O CARACTER FOR '0', TRANSFORMA EM '-'
                else if(x == '0'){
                    x = '-';
                    y = x;
                }
                // SE O CARACTER FOR MAIOR QUE 0 E MENOR OU IGUAL A 9
                else if(x > '0' && x <= '9'){
                    // DIMINUI O VALOR DE ROT
                    x = x - rot;
                    // SE FOR MENOR QUE '0'
                    if(x < '0'){
                        // ADICIONA '9', DIMINUI '0' E ADICIONA 1
                        x = x + '9' - '0' + 1;
                    }
                    y = x;
                }
                // SE FOR UMA LETRA MINÚSCULA
                else if(x >= 'a' && x <= 'z'){
                    // DIMINUI O VALOR DE ROT
                    x = x - rot;
                    // SE FOR MENOR QUE 'a'
                    if(x < 'a'){
                        // ADICIONA 'z', DIMINUI 'a' E ADICIONA 1
                        x = x + 'z' - 'a' + 1;
                    }
                    y = x;
                }
                // SE FOR UMA LETRA MAIÚSCULA
                else if(x >= 'A' && x <= 'Z'){
                    // DIMINUI O VALOR DE ROT
                    x = x - rot;
                    // SE FOR MENOR QUE 'A'
                    if(x < 'A'){
                        // ADICIONA 'Z', DIMINUI 'A' E ADICIONA 1
                        x = x + 'Z' - 'Z' + 1;
                    }
                    y = x;
                }
                // ESCREVE NO ARQUIVO SAIDA.txt
                fputc(y, arq_saida);
            }
            printf("Operacao de descriptografia concluida!\n");
        break;
    }
    // FECHAMENTO DOS ARQUIVOS
    fclose(arq_entrada);
    arq_entrada = NULL;
    fclose(arq_saida);
    arq_saida = NULL;
    return 0;
}
