/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 14 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <DADOS CINCO NÚMEROS, RETORNA A QUANTIDADE DE DÍGITOS PARES E ÍMPARES DE CADA NÚMERO>
*/
#include <stdio.h>

// PROTÓTIPO
int digitos(int cont, int p);

int main(){
    // VARIÁVEIS
    int i=1, a;
    // REPETE 5 VEZES
    while(i <= 5){
        // SOLICITA UM NÚMERO
        printf("Digite um numero: ");
        scanf("%d", &a);
        // RETORNA A QUANTIDADE DE DÍGITOS PARES
        printf("O numero %d tem %d digitos pares\n", a, digitos(0, a));
        // RETORNA A QUANTIDADE DE DÍGITOS ÍMPARES
        printf("O numero %d tem %d digitos impares\n", a, digitos(1, a));
        // INCREMENTA O i
        i++;
    }

    return 0;
}

int digitos(int cont, int p){
    // VARIÁVEIS
    int par = 0, impar = 0, aux;
    // PARA NÚMEROS MAIORES OU IGUAIS A 10
    if(p>=10){
        // REST RECEBE O ÚLTIMO DÍGITO DO NÚMERO PASSADO
        int rest = p%10;
        // PARA VERIFICAR NÚMEROS PARES
        if(cont == 0){
            // AUX RECEBE O RESTO DO ÚLTIMO DIGITO / 2
            aux = rest%2;
            // SE FOR IGUAL A 0
            if(aux == 0){
                // PAR INCREMENTA 1
                par ++;
                // RETORNA PAR MAIS O RESTO DA FUNÇÃO
                return par + digitos(cont, (p-rest)/10);
            }
            // SENÃO, RECOMEÇA A FUNÇÃO
            else{
                return digitos(cont, (p-rest)/10);
            }
     // PARA NÚMEROS ÍMPARES
    }else if(cont == 1){
        // AUX RECEBE O RESTO DO ÚLTIMO DIGITO / 2
        aux = rest%2;
            // SE O RESTO FOR IGUAL A 1
            if(aux == 1){
                // IMPAR INCREMENTA 1
                impar++;
                // RETORNA ÍMPAR MAIS O RESTO DA FUNÇÃO
                return impar + digitos(cont, (p-rest)/10);
              // SENÃO, RECOMEÇA A FUNÇÃO
            } else{
                return digitos(cont, (p-rest)/10);
            }
    }
     // PARA NÚMEROS ENTRE 0 E 9
    }else if(p >= 0 && p <=9){
        // PARA NÚMEROS PARES
        if(cont == 0){
            aux = p%2;
            if(aux == 0){
                // INCREMENTA 1
                par++;
                // RETORNA A QUANTIDADE DE DÍGITOS ÍMPARES
                return par;
        }
          // PARA NÚMEROS ÍMPARES
        } else if(cont == 1){
            aux = p%2;
            if(aux == 1){
            // INCREMENTA 1
            impar++;
            // RETORNA A QUANTIDADE DE DÍGITOS ÍMPARES
            return impar;
        }
        }
    }
    return 0;
}
