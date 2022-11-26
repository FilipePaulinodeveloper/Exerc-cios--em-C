//MATRIZ
#include <stdio.h>

int main(){
    int i,j;
    int matriz[3][3] = { {1,2,3}, {4,5,6}, {6,7,8} };

    printf("inpressão da matriz\n");

    for(i=0; i<=2; i++){
       for(j=0; j<=2; j++){
        printf("%d ",matriz[i][j]);
       }
        printf("\n");
    }
    

}