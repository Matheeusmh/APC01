// Implemente um código para validar CPF seguindo todas as regras oficiais. 
#include <stdio.h>
#include <string.h>

// Declaração de funções:
int letras(char cpf[]);
int primeirodigito(char cpf[]);
int segundodigito(char cpf[]);
int iguais(char cpf[]);

int main(void)
{
    // Declaração de variável:
    char cpf[20];

    // Entrada do CPF:
    printf("__Verificador de CPF__\nDigite os numeros presentes no CPF...\n OBSERVACAO:\n -NAO deve haver caracteres especiais(incluindo espacos e pontos). \n -NAO deve haver letras.\n -Devem haver 11 digitos.\nCPF: ");
    scanf("%s", &cpf);

    
    if (strlen(cpf) != 11) // Verificar se a string possui 11 digitos:
    {   // Imprimir caso o CPF tenha mais ou menos que 11 dígitos.
        printf("\n__CPF INVALIDO__\n -Motivo: O CPF nao possui 11 digitos.\n");
    }
    else
    {   
        if (letras(cpf) == 1) // Verificar se os 11 dígitos são números:
        {   // Imprimir caso o CPF tenha letra ou carácter especial.
            printf("\n__CPF INVALIDO__\n -Motivo: O CPF possui letras ou caracteres especiais.\n");
        }
        else
        {   
            if (primeirodigito(cpf) == 1) // Avaliar o primeiro dígito de verificação:
            {   
                if (segundodigito(cpf) == 1) // Avaliar o segundo dígito de verificação:
                {   
                    if (iguais(cpf) == 1) // Verificar se todos os números são iguais:
                    {   // Imprimir quando o CPF respeitar todas as regras.
                        printf("\n__CPF VALIDO__\n");
                    }
                    else
                    {   // Imprimir caso o CPF tenha 11 números iguais.
                        printf("\n__CPF INVALIDO__\n -Motivo: Os digitos sao todos iguais.\n");
                    }
                }
                else
                {   // Imprimir se o segundo dígito verificador for inválido.
                    printf("\n__CPF INVALIDO__\n -Motivo: O segundo digito verificador eh invalido!!\n");
                }
            }
            else
            {   // Imprimir se o primeiro dígito verificador for inválido.
                printf("\n__CPF INVALIDO__\n -Motivo: O primeiro digito verificador eh invalido!!\n");
            }
        }
    }

    return (0);
}
// Função para verificar se há somente números na string:
int letras(char cpf[])
{
    for (int i = 0; i < 11; i++)
    {
        if (cpf[i] < '0' || cpf[i] > '9')
        {
            return 1;
        }
    }

    return 0;
}
// Função para avaliar o primeiro dígito de verificação:
int primeirodigito(char cpf[])
{
    int soma = 0, a = 10, resto = 0;

    for (int i = 0; i < 9; i++)
    {
        soma += (((int)(cpf[i]) - 48) * a--);
    }

    resto = (soma * 10) % 11;

    if (resto == ((int)(cpf[9]) - 48))
    {
        return 1;
    }
}
// Função para a vaaliar o segundo dígito de verificação:
int segundodigito(char cpf[])
{
    int soma = 0, a = 11, resto = 0;

    for (int i = 0; i < 10; i++)
    {
        soma += ((int)(cpf[i]) - 48) * a--;
    }

    resto = (soma * 10) % 11;

    if (resto == ((int)(cpf[10]) - 48))
    {
        return 1;
    }
}
// Função para verificar se a string é composta por números iguais:
int iguais(char cpf[])
{
    int a = 0;

    for (int i = 1; i < 11; i++)
    {
        if (((int)(cpf[0]) - 48) == ((int)(cpf[i]) - 48))
        {
            a++;
        }
        if (a == 10)
        {
            return 0;
        }
    }

    return 1;
}
