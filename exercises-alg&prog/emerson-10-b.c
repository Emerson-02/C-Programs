/*
    UNIVERSIDADE FEDERAL DO RIO GRANDE DO SUL
    INF01202 - ALGORITMOS E PROGRAMA��O

    ATIVIDADE PR�TICA
    SEMANA 10 / EXERC�CIO b

    ALUNO: EMERSON DO NASCIMENTO RODRIGUES
    MATR�CULA: 2021/1

    <CRIAR FUN��ES. UMA PARA DIZER SE UM ANO � BISSEXTO, UMA PARA DIZER A QUANTIDADE DE DIAS QUE UM M�S TEM,
     UMA QUE MOSTRA O DIA SEGUINTE, 3 FUN��ES PARA VALIDAR O DIA, M�S E O ANO E UMA QUE L� UM INTEIRO POSITIVO
     E UMA SEQUENCIA DE DATAS, E RETORNA PARA CADA DATA, O DIA SEGUINTE.>
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// PROT�TIPOS DAS FUN��ES
int bissexto (int ano);
int numDias (int mes, int ano);
void diaSeguinte (int dia, int mes, int ano);
int intervaloDias (int dias);
int intervaloMes (int mes);
int intervaloAno (int ano);
void seqDatas ();

int main(){
    seqDatas();
    return 0;
}

// a)
int bissexto (int ano){
    int a;
    // SE O ANO FOR BISSEXTO
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        a = 1;
    } else {
        a = 0;
    }

    return a;
}

// b)
int numDias (int mes, int ano){
    int dias;
    int b = bissexto(ano);
    int c;
    // c RECEBE O N�MERO DE DIAS DE CADA M�S
    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            c = 31;
            break;
        case 2:
            c = 28 + b;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            c = 30;
            break;
    }

    return c;
}

// c)
void diaSeguinte (int dia, int mes, int ano){
    int b, c, d;
    int a = numDias(mes, ano);
    // SE O DIA FOR IGUAL AO N�MERO DE DIAS DE UM M�S
    if(dia == a){
        b = 1;
        c = mes + 1;
        d = ano;
    } else {
        b = dia + 1;
        c = mes;
        d = ano;
    }

    if(mes == 12){
            c = 1;
            d = ano + 1;
            }

    printf("O dia seguinte de %d/%d/%d eh %d/%d/%d\n\n", dia, mes, ano, b, c, d);

    return;
}

// d)
int intervaloDias (int dias){
    int a;
    // SE dias ESTIVER ENTRE 1 E 31
    if(dias >= 1 && dias <= 31){
        // a RECEBE 1
        a = 1;
    } else {
        // SEN�O, RECEBE 0
        a = 0;
    }

    return a;
}

int intervaloMes (int mes){
    int a;
    // SE mes ESTIVER ENTRE 1 E 12
    if(mes >= 1 && mes <= 12){
        // a RECEBE 1
        a = 1;
    } else {
        // SEN�O, RECEBE 0
        a = 0;
    }

    return a;
}

int intervaloAno (int ano){
    int a;
    // SE ano ESTIVER ENTRE 1900 E 2100
    if(ano >= 1900 && ano <= 2100){
        // a RECEBE 1
        a = 1;
    } else {
        // SEN�O, RECEBE 0
        a = 0;
    }

    return a;
}

// e
void seqDatas (){
    int d, dia, mes, ano, i;
    // PEDE PARA INFORMAR A QUANTIDADES DE DATAS QUE SER�O LIDAS
    printf("Informe a quantidade de datas que serao lidas: ");
    scanf("%d", &d);
    // ENQUANTO d FOR MAIOR OU IGUAL � 1
    do {
        printf("Informe o dia, mes e ano: ");
        scanf("%d %d %d", &dia, &mes, &ano);
        int a = intervaloDias(dia);
        int b = intervaloMes(mes);
        int c = intervaloAno(ano);

    // SE a, b, c FOREM IGUAIS � 1
        if(a == 1 && b == 1 && c == 1){
            // MOSTRA O DIA SEGUINTE
            diaSeguinte(dia, mes, ano);
            // DECREMENTA O d
            d--;
        } else {
            // SEN�O, RETORNA MENSAGEM DE DATA INV�LIDA E PEDE PARA INFOMAR NOVAMENTE
            printf("Data Invalida! Informe novamente...\n");
    }
    } while (d >= 1);

    return;
}
