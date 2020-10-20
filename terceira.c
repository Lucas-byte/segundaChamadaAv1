
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct Professor{
	
	char nome[50];
	char matricula[10];
	float salario;
	int qntdDisciplinasLecionadas;
};

typedef struct Professor Professor;

void buscarProfessorNome(Professor *vetor,int tamanho,char *nome)
{
	int i;
	int verif = 0;
	for(i = 0; i < tamanho;i++)
	{
		if(strcmp(nome,vetor[i].nome) == 0)
		{
			printf("\nProfessor Encontrado");
			printf("\nNome: %s",vetor[i].nome);
			printf("\nMatricula: %s",vetor[i].matricula);
			printf("\nSalario: %.3f",vetor[i].salario);
			printf("\nQuantidade de Disciplinas lecionadas no semestre: %d",vetor[i].qntdDisciplinasLecionadas);
			verif = 1;
			break;
		}
	}
	if(verif == 0)
	{
		printf("\nProfessor %s não cadastrado no vetor de Professores",nome);
	}
}
int main()
{
	Professor *professores;
	int n,i;
	char nomeBusca[50];
	printf("\nInforme a quantidade de professores que vão ser cadastrados no sistema: ");
	scanf("%d",&n);
	
	professores = (Professor*)malloc(n * sizeof(Professor));
	
	for(i = 0;i < n;i++)
	{
		setbuf(stdin,NULL);
		printf("\nInforme o nome do %d professor: ",i + 1);
		gets(professores[i].nome);
		setbuf(stdin,NULL);
		printf("\nInforme a matricula do %d professor: ",i + 1);
		gets(professores[i].matricula);
		setbuf(stdin,NULL);
		printf("\nInforme o Salario do %d professor: ",i + 1);
		scanf("%f",&professores[i].salario);
		printf("\nInforme a quantidade de disciplinas do %d professor: ",i + 1);
		scanf("%d",&professores[i].qntdDisciplinasLecionadas);
	}
    setbuf(stdin,NULL);
	printf("\nInforme o nome a ser buscado nos professores cadastrados: ");
	gets(nomeBusca);
	buscarProfessorNome(professores,n,nomeBusca);
	return 0;
}
