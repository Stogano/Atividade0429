#include <stdio.h>
#include <string.h>

int main() {
  char senha[20];
  printf("Digite a senha: ");
  scanf("%s", senha);

  int tamanho = strlen(senha);


 if (tamanho>=8)
 {  printf("Senha conforme");
     
 }else{printf("Erro na senha");}
  return 0;
} 