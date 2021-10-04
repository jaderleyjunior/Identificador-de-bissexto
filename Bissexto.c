//Jaderley Fonseca Marins Junior 21.1.4058 BCC201-43

#include<math.h>
#include<stdlib.h>
#include<stdio.h>


int main() {
    int ano;
    //Mensagem para a ecolha do ano
    printf("Digite o ano desejado\n");
    scanf("%d", &ano);
    //identificação do ano
    if((ano % 4 == 0 && ano % 100 != 0) || (ano %100 == 0 && ano % 400 == 0))
    //Resultado da identificação
    {
        printf("Este ano eh bissexto\n");
    }
    else
    {
        printf("este ano nao eh bissexto\n");
    }
    return 0;
    
    

}