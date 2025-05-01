#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6]; 
    char letra;
    int erros = 0;
    int encontrada;

    printf("Digite uma palavra de ate 5 letras: ");
    scanf("%5s", palavra); 

    while (erros < 3) {
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra); 

        encontrada = 0;
        for (int i = 0; i < strlen(palavra); i++) {
            if (palavra[i] == letra) {
                encontrada = 1;
                break;
            }
        }

        if (encontrada) {
            printf("Letra encontrada na palavra!\n");
        } else {
            erros++;
            printf("Letra NAO encontrada. Erros: %d/3\n", erros);
        }
    }

    printf("\nVoce errou 3 vezes. Fim do programa.\n");

    return 0;
}
