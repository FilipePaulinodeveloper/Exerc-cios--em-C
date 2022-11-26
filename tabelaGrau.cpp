#include <stdio.h>
#include <math.h>

int main() {
    int grau; 
    float radiano, Cos;   

    for (grau = 0; grau<=360; grau= grau+10){
        radiano = 3.14 * grau/180;       
        Cos = cos(radiano);
        printf(" grau %d, radiano %f , cos %f\n", grau, radiano, Cos);
    }

}