#include <stdio.h>
#include <stdlib.h>
#define TAM 50

typedef struct Paciente {
    char nome[40]; /* nome do paciente */
    int idade; /* idade em anos */
    char sexo; /* sexo: (M)asculino ou (F)eminino */
    float altura; /* altura do paciente (em metros) */
    int peso; /* peso (em kg) */
    } t_paciente;

void salva_pacientes(t_paciente pacientes[TAM], int n);
void le_pacientes(t_paciente pacientes[TAM], int *n);
void escreve_pacientes(t_paciente pacientes[TAM], int n);



//
int main(){

    FILE *arq;



    return 0;
}


//
void salva_pacientes(t_paciente pacientes[TAM], int n){
    int i;
	//int len_vet = sizeof(pessoas) - 1; // tamanho do vetor
	FILE * arq;

	// abre o arquivo para escrita no modo append (adiciona ao final)
	arq = fopen("dados.bin", "ab");

	if(arq != NULL)
	{
		for(i = 0; i < n; i++)
			// escreve cada elemento do vetor no arquivo
			fwrite(&pacientes[i], sizeof(t_paciente), 1, arq);
            fclose(arq); // aborta o programa
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}


}


//
void le_pacientes(t_paciente pacientes[TAM], int *n){

    // abre o arquivo para leitura
	FILE * arq = fopen("dados.bin", "rb");

	if(arq != NULL)
	{
		int i = 0;
		while(1)
		{
			t_paciente p;

			// fread ler os dados
			// retorna a quantidade de elementos lidos com sucesso
			size_t r = fread(&p, sizeof(t_paciente), 1, arq);

			// se retorno for menor que o count, então sai do loop
			if(r < 1)
				break;
			else
				pacientes[i++] = p;
		}
		fclose(arq); // fecha o arquivo
		return i;
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}
}
