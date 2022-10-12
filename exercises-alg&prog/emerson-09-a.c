/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMAÇÃO

    ATIVIDADE PRÁTICA
    SEMANA 09 / EXERCÍCIO a

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATRÍCULA: 2021/1

    <DADO AS COORDENADAS DE UM RETÂNGULO, RECEBE UM PONTO (X,Y) E DIZ SE ESSE PONTO ESTÁ DENTRO, NAS BORDAS OU FORA DO RETÂNGULO.>
*/

#include<stdio.h>

// PROTÓTIPO DA FUNÇÃO
char dentroRetangulo (int v1x, int v1y, int v2x, int v2y, int x, int y);

int main(){
    // DECLARAÇÃO DAS VARIÁVEIS
    int v1x, v1y, v2x, v2y, x, y;
    printf("=== Coordenadas do Retangulo ===\n");
    // ENQUANTO OS VÉRTICES INFERIORES ESQUERDOS FOREM MENOR QUE 1
    do{
        // PEDE AS COORDENADAS DO CANTO INFERIOR ESQUERDO
        printf("Informe as coordenadas do canto inferior esquerdo: ");
        // GUARDA NAS VARIÁVEIS
        scanf("%d %d", &v1x, &v1y);
        // SE FOREM MENOR QUE 1, IMPRIME UMA MENSAGEM NA TELA
        if(v1x < 1 || v1y < 1){
            printf("COORDENADAS INVALIDAS! Informe novamente\n");
        }
    } while(v1x < 1 || v1y < 1);

    // ENQUANTO OS VÉRTICES SUPERIORES DIREITOS FOREM MENOR QUE 1
    do{
        // PEDE AS COORDENADAS DO CANTO SUPERIOR DIREITO
        printf("Informe as coordenadas do canto inferior direito: ");
        // GUARDA NAS VARIÁVEIS
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
        // GUARDA NAS VARIÁVEIS
        scanf("%d %d", &x, &y);
        // LETRA RECEBE O RETORNO DE dentroRetangulo
        char letra = dentroRetangulo(v1x, v1y, v2x, v2y, x, y);
        // SE FOR 'D'
        if(letra == 'D'){
            // O PONTO ENCONTRA-SE DENTRO DO RETÂNGULO
            printf("O ponto (%d,%d) encontra-se dentro do retangulo.\n", x, y);
        }
        // SE FOR 'B'
        else if(letra == 'B'){
            // O PONTO ENCONTRA-SE SOBRE AS BORDAS DO RETÂNGULO
            printf("O ponto (%d,%d) encontra-se sobre as bordas do retangulo.\n", x, y);
        }
        // SE FOR 'F'
        else if(letra == 'F' && x != 9999 && y != 9999){
            // O PONTO ENCONTRA-SE FORA DO RETÂNGULO
            printf("O ponto (%d,%d) encontra-se fora do retangulo.\n", x, y);
        }
    } while(x != 9999);
    return 0;
}

char dentroRetangulo (int v1x, int v1y, int v2x, int v2y, int x, int y){
    char letra;
    // SE X FOR MAIOR QUE V1X E MENOR QUE V2X E Y FOR MAIOR QUE V1Y E MENOR QUE V2Y
     if(x > v1x && x < v2x && y > v1y && y < v2y){
        // GUARDA 'D' NA VARIÁVEL LETRA
        letra = 'D';
    }
    // SE X FOR IGUAL À V1X OU V2X OU Y FOR IGUAL À V1Y OU V2Y
    else if(v1x == x || v2x == x || v1y == y || v2y == y){
        // GUARDA 'B' NA VARIÁVEL LETRA
        letra = 'B';
    }
    // SENÃO
    else{
        // GUARDA 'F' NA VARIÁVEL LETRA
        letra = 'F';
    }
    // RETORNA LETRA
    return letra;
}
