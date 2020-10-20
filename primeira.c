
#include<stdio.h>
#include<stdlib.h>


void criptografar(char *frase)
{
	int i;
	for(i = 0; frase[i] != '\0';i++)
	{
		switch(frase[i])
		{
			case 'a':
			case 'A':
			frase[i] = '(';
			break;	
			
			case 'e':
			case 'E':
			frase[i] = '/';
			break;
			
			case 'i':
			case 'I':
			frase[i] = '\\';
			break;
			
			case 'o':
			case 'O':
			frase[i] = '*';
			break;
			
			case 'u':
			case 'U':
			frase[i] = '&';
			break;
			
			default:
			frase[i] = '@';
		}	
	}
}

int main()
{
	char frase[50];
	printf("\nInforme uma frase: ");
    scanf("%[^\n]s", frase);
    
	criptografar(frase);
	
	printf("Frase Criptografada: %s\n",frase);
	return 0;
}
