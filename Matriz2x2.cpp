#include <stdio.h>

int main(){
    int A[2][2] , B[2][2] ;
    int i, k;
    int  multA;

    //Leitura da matriz A

    printf("informe a matriz A 2x2\n");
    for (i=0; i<=1; i++){
        for (k=0; k<=1; k++){
            printf("Elemento %d,%d:",i,k);
			scanf("%d",&A[i][k]);
        }
        printf("\n");
    }

    //Leitura multA
    printf ("Informe um numero inteiro\n");
    scanf(" %d", &multA);
    printf("\n");

    //Multiplicando e armazenadno em B
    for(i=0; i<=1; i++)
    {   
        for(k=0; k<=1; k++){
            B[i][k] = A[i][k]*multA;               
        }      

    }

    //Imprimindo a matriz A
    printf("imprimindo a matriz A 2x2\n");
    for(i=0;i<=1; i++){
        for(k=0; k<=1; k++){
            printf("%d ",A[i][k] );
        }
        printf("\n");
    }
 
    //imprimindo a matriz B 2x2
    printf("\nimprimindo a matriz B 2x2 \n");
    for(i=0;i<=1;i++){
        for(k=0;k<=1; k++){
            
            printf("%d ", B[i][k] );
        }
        printf("\n");
    }
    
	
	getchar();
	return 0;	
}




    

    
