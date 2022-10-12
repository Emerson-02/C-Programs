/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 09 / EXERC�CIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <DADO AS COORDENADAS DE UM RET�NGULO, RECEBE UM PONTO (X,Y) E DIZ SE ESSE PONTO EST� DENTRO, NAS BORDAS OU FORA DO RET�NGULO.>
*/

#include<stdio.h>

// PROT�TIPO DA FUN��O
char dentroRetangulo (int v1x, int v1y, int v2x, int v2y, int x, int y);

int main(){
    // DECLARA��O DAS VARI�VEIS
    int v1x, v1y, v2x, v2y, x, y;
    printf("=== Coordenadas do Retangulo ===\n");
    // ENQUANTO OS V�RTICES INFERIORES ESQUERDOS FOREM MENOR QUE 1
    do{
        // PEDE AS COORDENADAS DO CANTO INFERIOR ESQUERDO
        printf("Informe as coordenadas do canto inferior esquerdo: ");
        // GUARDA NAS VARI�VEIS
        scanf("%d %d", &v1x, &v1y);
        // SE FOREM MENOR QUE 1, IMPRIME UMA MENSAGEM NA TELA
        if(v1x < 1 || v1y < 1){
            printf("COORDENADAS INVALIDAS! Informe novamente\n");
        }
    } while(v1x < 1 || v1y < 1);

    // ENQUANTO OS V�RTICES SUPERIORES DIREITOS FOREM MENOR QUE 1
    do{
        // PEDE AS COORDENADAS DO CANTO SUPERIOR DIREITO
        printf("Informe as coordenadas do canto inferior direito: ");
        // GUARDA NAS VARI�VEIS
        scanf("%d %d", &v2x, &v2y);
        // SE FOREM MENOR QUE 1, IMPRIME UMA MENSAGEM NA TELA
        if(v2x < 1 || v2y < 1){
            printf("COORDENADAS INVALIDAS! Informe novamente\n");
        }
    } while(v2x < 1 || v2y < 1);

    printf("=== PONTOS ===\n");

    // ENQUANTO X FOR DIFERENTE DE 9999
    do{
        // PEDE AS COORDENADAS X E Y
        printf("Informe as coordenadas (x,y): ");
        // GUARDA NAS VARI�VEIS
        scanf("%d %d", &x, &y);
        // LETRA RECEBE O RETORNO DE dentroRetangulo
        char letra = dentroRetangulo(v1x, v1y, v2x, v2y, x, y);
        // SE FOR 'D'
        if(letra == 'D'){
            // O PONTO ENCONTRA-SE DENTRO DO RET�NGULO
            printf("O ponto (%d,%d) encontra-se dentro do retangulo.\n", x, y);
        }
        // SE FOR 'B'
        else if(letra == 'B'){
            // O PONTO ENCONTRA-SE SOBRE AS BORDAS DO RET�NGULO
            printf("O ponto (%d,%d) encontra-se sobre as bordas do retangulo.\n", x, y);
        }
        // SE FOR 'F'
        else if(letra == 'F' && x != 9999 && y != 9999){
            // O PONTO ENCONTRA-SE FORA DO RET�NGULO
            printf("O ponto (%d,%d) encontra-se fora do retangulo.\n", x, y);
        }
    } while(x != 9999);
    return 0;
}

char dentroRetangulo (int v1x, int v1y, int v2x, int v2y, int x, int y){
    char letra;
    // SE X FOR MAIOR QUE V1X E MENOR QUE V2X E Y FOR MAIOR QUE V1Y E MENOR QUE V2Y
     if(x > v1x && x < v2x && y > v1y && y < v2y){
        // GUARDA 'D' NA VARI�VEL LETRA
        letra = 'D';
    }
    // SE X FOR IGUAL � V1X OU V2X OU Y FOR IGUAL � V1Y OU V2Y
    else if(v1x == x || v2x == x || v1y == y || v2y == y){
        // GUARDA 'B' NA VARI�VEL LETRA
        letra = 'B';
    }
    // SEN�O
    else{
        // GUARDA 'F' NA VARI�VEL LETRA
        letra = 'F';
    }
    // RETORNA LETRA
    return letra;
}
