// // #include <stdio.h>
// // /* programa array3 - inicializa um array */
// // int main()
// // {
// //  int num[4] = {1,2,3,4}, i = 0;
// //  // inicialização do array
// //  for (i = 0 ; i < 4 ; i++)
// //  {
// //     printf("%d\n",num[i]);
// //  }
// //  getchar();
// //  return 0;
// // }

// //......................//

// // Listagem do array (lista): 52 10 -65 94

// // programa array2
// #include<stdio.h>
// int main()
// {
// float nota[5] = {52,  10,  -65,  94};
// int i;

// // Impressao
// for (i=0;i<=4;i++)
// {
// printf("Nota do aluno %f\n",nota[i]);
// }
//  getchar();
// return 0;
// }

#include <stdio.h>
int main( )
{
 int linha,coluna;
 int x[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
// Imprimir a matriz - um elemento de cada vez
printf("\nImpressao da matriz\n");
for (linha=0;linha<=2;linha++)
{
 for (coluna=0;coluna<4;coluna++)
 {
printf("Elemento %d,%d=%d \n",linha,coluna,x[linha][coluna]);
 }
}
getchar();
return 0;
}
