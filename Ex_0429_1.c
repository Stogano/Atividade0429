// Online C compiler to run C program online
#include <stdio.h>

int main() {
char nome[] = "Carlos";
int i=0;
printf("Nome: %s\n",nome);
printf("*");
while(nome[i]!='\0'){
   printf("%c *",nome[i]); 
   i++;
}
printf("\n");
}