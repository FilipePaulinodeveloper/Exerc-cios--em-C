// Faça um programa que leia um número inteiro (positivo e inferior a 1000) e determine
// se o número é primo.
// Obs.: Um número é primo se for divisível apenas por 1 e por ele mesmo
#include <stdio.h> 

int main () {
    int i, num, cont = 0;
    
    
    printf("Informe um numero inteiro.\n");

    scanf("%d",&num);

    for (i=1; i<1000; i++)
      if(num%i == 0)
        cont++;
     
      if(cont == 2)
        printf("Nuim %d e primo.\n",num);
     
      else
        printf("nao é primo");
     


}