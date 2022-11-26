// Faça um programa que leia a idade, o sexo e o tempo de serviço de uma pessoa e imprima
// uma mensagem informando acerca de sua aposentadoria:
// Condições para aposentadoria:
// Sexo masculino: Tempo de serviço mínimo de 35 anos e idade mínima de 65 anos
// Sexo feminino: Tempo de serviço mínimo de 30 anos e idade mínima de 62 anos
// Se satisfizer as condições imprimir: HABILITADO
// Caso contrário, imprimir: NÃO HABILITADO

#include <stdio.h>

int main () {

    int idade, tempoServico;
    char sexo ;

    printf("Informe seu sexo: F = Feminino e M = masculino \n");
    scanf("%c", &sexo);

    if(sexo != 'M' && sexo != 'F'){
        printf("O sexo não foi informado corretamente");   
        return 0;         
    }

    printf("Informe a idade:");
    scanf("%d",&idade);

    printf("Informe o tempo servico:");
    scanf("%d",&tempoServico);

  

    if(sexo == 'M' && idade >= 65 && tempoServico >= 35){
        printf("HABILITADO");
    }
    else if(sexo == 'F' && idade >= 62 && tempoServico >= 30){
        printf("HABILITADO");
    }
   else {
        printf("NÃO HABILITADO");
    }
    

}


// Faça um programa que leia a idade, o sexo e o tempo de serviço de uma pessoa e imprima
// uma mensagem informando acerca de sua aposentadoria:
// Condições para aposentadoria:
// Sexo masculino: Tempo de serviço mínimo de 35 anos e idade mínima de 65 anos
// Sexo feminino: Tempo de serviço mínimo de 30 anos e idade mínima de 62 anos
// Se satisfizer as condições imprimir: HABILITADO
// Caso contrário, imprimir: NÃO HABILITADO

// #include <stdio.h>

// int main () {

//     int idade, tempoServico;
//     char sexo ;

//     printf("Informe seu sexo:");
//     scanf("%c", &sexo);

//     if(sexo == 'M'){
//         printf("Informe a idade:");
//         scanf("%d",&idade);
//         printf("Informe o tempo servico:");
//         scanf("%d",&tempoServico);
//         if (idade <= 65 && tempoServico >= 35) 
//         {
//           printf("voce tem a idade e tempo de servico correto para a aposentadoria");
//         }    

//     }else if(sexo == 'F'){
//         printf("Informe a idade:");
//         scanf("%d",&idade);
//         printf("Informe o tempo servico:");
//         scanf("%d",&tempoServico);
//         if (idade <= 62 && tempoServico >= 30) 
//         {
//           printf("voce tem a idade e tempo de servico correto para a aposentadoria");
//         }   

//     }else {
//         printf("Voce ainda não tem direito a aposentadoria");
//     }
    

// }