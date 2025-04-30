#include <stdio.h>

int main() {
    char senha[20];
    char correta[] = "azimo";
    int tentativas = 3;
    int i, igual;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha);

       
        igual = 1; 
        for (i = 0; correta[i] != '\0' || senha[i] != '\0'; i++) {
            if (correta[i] != senha[i]) {
                igual = 0;
                break;
            }
        }

        if (igual) {
            printf("Seja bem vindo!\n");
            break;
        } else {
            tentativas--;
            if (tentativas == 0) {
                printf("Tente novamente mais tarde.\n");
            } else {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            }
        }
    }

    return 0;
}
