
#include<stdio.h>
#include<stdlib.h>
void funcao(int n, float *vetor)
{
	int qntdAcima = 0,i;
	float media,soma = 0;
	
	for(i = 0;i < n;i++)
	{
		soma += vetor[i];
	}
	media = soma / n;
	
	
	for(i = 0;i < n;i++)
	{
		if(vetor[i] > media)
		{
			qntdAcima++;
		}
	}
	printf("\nMedia das alturas Cadastradas: %.3f",media);
	printf("\nQuantidade de alturas acima da media: %d",qntdAcima);
}
int main()
{
	float vetor[10];
	int i;
	printf("\nPreencha o Vetor: ");
	for(i = 0;i < 10;i++)
	{
		printf("\nInforme o %d elemento do vetor: ",i + 1);
		scanf("%f",&vetor[i]);			
	}	
	funcao(10,vetor);
	return 0;
}
