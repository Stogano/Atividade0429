// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int num,soma=0;
 printf("Digite um numero: ");
 scanf("%d",&num);
 for(int i=1;i<num;i++){
     if(i%3==0||i%5==0){
         soma+=i;
     }
 }
 printf("Soma %d",soma);
    return 0;
}