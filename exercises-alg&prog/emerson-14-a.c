/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 14 / EXERC�CIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <DADOS CINCO N�MEROS, RETORNA A QUANTIDADE DE D�GITOS PARES E �MPARES DE CADA N�MERO>
*/
#include <stdio.h>

// PROT�TIPO
int digitos(int cont, int p);

int main(){
    // VARI�VEIS
    int i=1, a;
    // REPETE 5 VEZES
    while(i <= 5){
        // SOLICITA UM N�MERO
        printf("Digite um numero: ");
        scanf("%d", &a);
        // RETORNA A QUANTIDADE DE D�GITOS PARES
        printf("O numero %d tem %d digitos pares\n", a, digitos(0, a));
        // RETORNA A QUANTIDADE DE D�GITOS �MPARES
        printf("O numero %d tem %d digitos impares\n", a, digitos(1, a));
        // INCREMENTA O i
        i++;
    }

    return 0;
}

int digitos(int cont, int p){
    // VARI�VEIS
    int par = 0, impar = 0, aux;
    // PARA N�MEROS MAIORES OU IGUAIS A 10
    if(p>=10){
        // REST RECEBE O �LTIMO D�GITO DO N�MERO PASSADO
        int rest = p%10;
        // PARA VERIFICAR N�MEROS PARES
        if(cont == 0){
            // AUX RECEBE O RESTO DO �LTIMO DIGITO / 2
            aux = rest%2;
            // SE FOR IGUAL A 0
            if(aux == 0){
                // PAR INCREMENTA 1
                par ++;
                // RETORNA PAR MAIS O RESTO DA FUN��O
                return par + digitos(cont, (p-rest)/10);
            }
            // SEN�O, RECOME�A A FUN��O
            else{
                return digitos(cont, (p-rest)/10);
            }
     // PARA N�MEROS �MPARES
    }else if(cont == 1){
        // AUX RECEBE O RESTO DO �LTIMO DIGITO / 2
        aux = rest%2;
            // SE O RESTO FOR IGUAL A 1
            if(aux == 1){
                // IMPAR INCREMENTA 1
                impar++;
                // RETORNA �MPAR MAIS O RESTO DA FUN��O
                return impar + digitos(cont, (p-rest)/10);
              // SEN�O, RECOME�A A FUN��O
            } else{
                return digitos(cont, (p-rest)/10);
            }
    }
     // PARA N�MEROS ENTRE 0 E 9
    }else if(p >= 0 && p <=9){
        // PARA N�MEROS PARES
        if(cont == 0){
            aux = p%2;
            if(aux == 0){
                // INCREMENTA 1
                par++;
                // RETORNA A QUANTIDADE DE D�GITOS �MPARES
                return par;
        }
          // PARA N�MEROS �MPARES
        } else if(cont == 1){
            aux = p%2;
            if(aux == 1){
            // INCREMENTA 1
            impar++;
            // RETORNA A QUANTIDADE DE D�GITOS �MPARES
            return impar;
        }
        }
    }
    return 0;
}
