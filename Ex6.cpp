/*******************************************************************************

06. Para as sequências numéricas dos exercícios 01 e 02, implemente o
algoritmo da bolha mostrando quantas trocas e quantas comparações são
feitas durante a ordenação usando a melhoria realizada no exercício 05.
A mudança do algoritmo foi eficaz?

22222222222222222222222

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define ARRAYLEN(ar) (sizeof(ar) / sizeof(ar[0]))

int main()
{
    printf("\n ---------------- Exercicio 1 -------------------\n");
    printf("---------------- Vetor Desordenado -------------------\n");
    printf("\n Vetor (3, 4, 8, 9, 7, 5, 2, 6, 1) \n");
    printf("\n");

    int Num[] = {3, 4, 8, 9, 7, 5, 2, 6, 1};
    int i, j, aux = 0, cont = 0;
    int Qcomp1 = 0, Qcomp2 = 0, Qcomp3 = 0, trocou = 0, Qcomp = 0, Qtroca;
    
    do {
        trocou = false;
        for (i = 0; i < ARRAYLEN(Num) - 1; i++) {
            Qcomp1++;
            if (Num[i] > Num[i+1]) {
                
                aux = Num[i];
                Num[i] = Num[i+1];
                Num[i+1] = aux;
                
                Qtroca++;
                trocou = true;
            }
            else{
              Qcomp2++;
            }
        }
    } while (trocou);

    for(i = 0; i < ARRAYLEN(Num); i++){
      for(j = 0; j < ARRAYLEN(Num); j++){

        if(i != j){
        
          if(Num[i] == Num[j]){
            cont++;
          }
          else{
            Qcomp3++;
          }
        }
      }
    }
    
    for(i = 0; i < ARRAYLEN(Num); i++){
        
        printf("Vetor Ordenado: %d \n", Num[i]);
    }
    printf("\n");
    printf("Troca: %d \n", Qtroca); 
    printf("Comparação dos Numeros: %d \n", Qcomp1);
    printf("Comparação dos Menores Numeros: %d \n", Qcomp2);
    printf("Comparação dos Numeros Nao Repetidos: %d \n", Qcomp3);
    printf("Numero repetido %d \n", cont);
    
    printf("\n ---------------- Exercicio 2 -------------------\n");
    printf("---------------- Vetor Desordenado -------------------\n");
    printf("\n Vetor (7, 13, 3, 4, 20, 5, 8, 9, 7, 5, 2, 6, 1)");
    printf("\n");
    
    int Num1[] = {7, 13, 3, 4, 20, 5, 8, 9, 7, 5, 2, 6, 1};
    
    i = 0;
    j = 0;
    Qcomp1 = 0, Qcomp2 = 0, Qcomp3 = 0;
    cont = 0;
    Qtroca = 0; 
    
    printf("\n");
    do {
        trocou = false;
        for (int i = 0; i < ARRAYLEN(Num1) - 1; i++) {
            Qcomp1++;
            if (Num1[i] > Num1[i+1]) {
                
                aux = Num1[i];
                Num1[i] = Num1[i+1];
                Num1[i+1] = aux;
                
                Qtroca++;
                trocou = true;
            }
            else{
              Qcomp2++;
            }
        }
    } while (trocou);

    for(i = 0; i < ARRAYLEN(Num1); i++){
      for(j = 0; j < ARRAYLEN(Num1); j++){

        if(i != j){
        
          if(Num1[i] == Num1[j]){
            cont++;
          }
          else{
            Qcomp3++;
          }
        }
      }
    }
    
    for(i = 0; i < ARRAYLEN(Num1); i++){
        
        printf("Vetor Ordenado: %d \n", Num1[i]);
    }
    printf("\n");
    printf("Troca: %d \n", Qtroca); 
    printf("Comparação dos Numeros: %d \n", Qcomp1);
    printf("Comparação dos Menores Numeros: %d \n", Qcomp2);
    printf("Comparação dos Numeros Nao Repetidos: %d \n", Qcomp3);
    printf("Numero repetido %d \n", cont); 
    
    printf("\n ------------------------------------------------\n");
    printf("---------------- Vetor Decrescente -------------------\n");
    printf("\n Vetor (20, 18, 14, 13, 12, 10, 9, 8, 7, 4, 3, 2, 1)\n");
    printf("\n");
    

    int Num2[] = {20, 18, 14, 13, 12, 10, 9, 8, 7, 4, 3, 2, 1};
        
    i = 0;
    j = 0;
    Qcomp1 = 0, Qcomp2 = 0, Qcomp3 = 0;
    cont = 0;
    Qtroca = 0; 
       
    do {
        trocou = false;
        for (int i = 0; i < ARRAYLEN(Num2) - 1; i++) {
            Qcomp1++;
            if (Num2[i] > Num2[i+1]) {
                
                aux = Num2[i];
                Num2[i] = Num2[i+1];
                Num2[i+1] = aux;
                
                Qtroca++;
                trocou = true;
            }
            else{
              Qcomp2++;
            }
        }
    } while (trocou);

    for(i = 0; i < ARRAYLEN(Num2); i++){
      for(j = 0; j < ARRAYLEN(Num2); j++){

        if(i != j){
        
          if(Num2[i] == Num2[j]){
            cont++;
          }
          else{
            Qcomp3++;
          }
        }
      }
    }
    
    for(i = 0; i < ARRAYLEN(Num2); i++){
        
        printf("Vetor Ordenado: %d \n", Num2[i]);
    }
    printf("\n");
    printf("Troca: %d \n", Qtroca); 
    printf("Comparação dos Numeros: %d \n", Qcomp1);
    printf("Comparação dos Menores Numeros: %d \n", Qcomp2);
    printf("Comparação dos Numeros Nao Repetidos: %d \n", Qcomp3);
    printf("Numero repetido %d \n", cont);
    
    printf("\n ------------------------------------------------\n");
    printf("---------------- Vetor Ordenado -------------------\n");
    printf("\n Vetor (1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 15, 18, 20)\n");
    printf("\n");
    
    int Num3[] = {1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 15, 18, 20};
    
    i = 0;
    j = 0;
    Qcomp1 = 0, Qcomp2 = 0, Qcomp3 = 0;
    cont = 0;
    Qtroca = 0; 
        
    do {
        trocou = false;
        for (int i = 0; i < ARRAYLEN(Num3) - 1; i++) {
            Qcomp1++;
            if (Num3[i] > Num3[i+1]) {
                
                aux = Num3[i];
                Num3[i] = Num3[i+1];
                Num3[i+1] = aux;
                
                Qtroca++;
                trocou = true;
            }
            else{
              Qcomp2++;
            }
        }
    } while (trocou);

    for(i = 0; i < ARRAYLEN(Num3); i++){
      for(j = 0; j < ARRAYLEN(Num3); j++){

        if(i != j){
        
          if(Num3[i] == Num3[j]){
            cont++;
          }
          else{
            Qcomp3++;
          }
        }
      }
    }
    
    for(i = 0; i < ARRAYLEN(Num3); i++){
        
        printf("Vetor Ordenado: %d \n", Num3[i]);
    }
    printf("\n");
    printf("Troca: %d \n", Qtroca); 
    printf("Comparação dos Numero: %d \n", Qcomp1);
    printf("Comparação dos Menores Numeros: %d \n", Qcomp2);
    printf("Comparação dos Numeros Nao Repetidos: %d \n", Qcomp3);
    printf("Numero repetido %d \n", cont);
}
